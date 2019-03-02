int getReg()
{
	if(reg>=20){
		printf("Out of registers\n");
		exit(1);
	}
	return reg++;
}

void freeReg()
{
	if(reg>0)
		reg--;
}

struct tnode* createTree(int val, int type, char varname, int nodetype, struct tnode *l, struct tnode *r)
{
	struct tnode *temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->nodetype = nodetype;
	switch(nodetype)
	{
		case _ID_:
			temp->varname = varname;
			temp->left = NULL;
			temp->right = NULL;
			break;
		case _NUM_:
			temp->val = val;
			temp->left = NULL;
			temp->right = NULL;
			break;
		case _PLUS_:
		case _MINUS_:
		case _DIV_:
		case _MUL_:
		case _ASSIGN_:
		case _BODY_:
			temp->left = l;
			temp->right = r;
			break;
		case _READ_:
		case _WRITE_:
			temp->left =l;
			temp->right =NULL;
			break;
	}
	return temp;
}


int codeGen(struct tnode *t)
{
	int w,x,y,z;

	if(t == NULL)
		return -1;

	switch(t->nodetype)
	{
		case _NUM_:
			x = getReg();
			fprintf(target_file,"MOV R%d, %d\n",x,t->val);
			return x;
	
		case _ID_:
			x = getReg();
			fprintf(target_file,"MOV R%d, [%d]\n",x,(t->varname)-'a'+4096);
			return x;

		case _ASSIGN_:
			x = codeGen(t->right);
			y = (t->left->varname) - 'a' + 4096;
			fprintf(target_file,"MOV [%d], R%d\n",y,x);
			freeReg();
			return x;

		case _PLUS_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"ADD R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _MINUS_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"SUB R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _MUL_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"MUL R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _DIV_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"DIV R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _BODY_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			return -1;
	
		case _READ_:
			y = getReg();
			fprintf(target_file,"MOV R%d, \"Read\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -1\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, %d\n",y,(t->left->varname)-'a'+4096);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"CALL 0\n");
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			freeReg();
			return y;

		case _WRITE_:
			x = codeGen(t->left);
			y = getReg();
			fprintf(target_file,"MOV R%d, \"Write\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -2\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"PUSH R%d\n",x);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"CALL 0\n");
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			fprintf(target_file,"POP R%d\n",y);
			freeReg();
			freeReg();
			return x;
	}
}

int evaluate(struct tnode *t)
{
	int x, y, z;

	if(t == NULL)
		return -1;

	switch(t->nodetype)
	{
		case _ID_ :
			return arr[t->varname -'a'];
			break;

		case _NUM_ :
			return t->val;
			break;

		case _PLUS_ :
			return evaluate(t->left) + evaluate(t->right);

		case _MINUS_ :
			return evaluate(t->left) - evaluate(t->right);

		case _MUL_ :
			return evaluate(t->left) * evaluate(t->right);
		
		case _DIV_ :
			return evaluate(t->left) / evaluate(t->right);
		
		case _ASSIGN_ :	
			arr[(t->left->varname)-'a'] = evaluate(t->right);
			return arr[(t->left->varname)-'a'];
			
		case _BODY_ :
			evaluate(t->left);
			return evaluate(t->right);

		case _READ_ :
			return scanf("%d",&arr[(t->left->varname)-'a']);

		case _WRITE_ :
			return printf("%d\n",evaluate(t->left));

	}
}

