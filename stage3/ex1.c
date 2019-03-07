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

int getLabel()
{
	return label++;
}

struct tnode* createTree(int val, int type, char varname, int nodetype, struct tnode *l, struct tnode *m, struct tnode *r)
{
	struct tnode *temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = val;
	temp->type = type;
	temp->nodetype = nodetype;

	if(isalpha(varname))
		temp->varname = varname;
	else
    		temp->varname = '\0';
  
    	temp->left = l;
	temp->mid = m;
	temp->right = r;

	typechecker(temp);
	
	return temp;
}	


int codeGen(struct tnode *t)
{
	int x,y,z,l1,l2;

	if(t == NULL)
		return -2;

	switch(t->nodetype)
	{
		case _NUM_ :
			x = getReg();
			fprintf(target_file,"MOV R%d, %d\n",x,t->val);
			return x;
	
		case _ID_ :
			x = getReg();
			fprintf(target_file,"MOV R%d, [%d]\n",x,(t->varname)-'a'+4096);
			return x;

		case _ASSIGN_ :
			x = codeGen(t->right);
			y = (t->left->varname) - 'a' + 4096;
			fprintf(target_file,"MOV [%d], R%d\n",y,x);
			freeReg();
			return x;

		case _PLUS_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"ADD R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _MINUS_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"SUB R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _MUL_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"MUL R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _DIV_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"DIV R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _LT_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"LT R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _GT_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"GT R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _LE_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"LE R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _GE_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"GE R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _EQ_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"EQ R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _NE_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"NE R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _BODY_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			return -1;

		case _BREAK_ :
			if(loopHead!=NULL)
				fprintf(target_file,"JMP L%d\n",loopHead->br);
			return -1;

		case _CONTINUE_ :
			if(loopHead!=NULL)
				fprintf(target_file,"JMP L%d\n",loopHead->cn);
			return -1;
				
		case _READ_ :
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
			return -1;

		case _WRITE_ :
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
			return -1;

		case _IF_THEN_ELSE_ :
			l1 = getLabel();
			l2 = getLabel();
			x = codeGen(t->left);
			fprintf(target_file,"JZ R%d, L%d\n",x,l1);
			freeReg();
			y = codeGen(t->mid);
			fprintf(target_file,"JMP L%d\n",l2);
			fprintf(target_file,"L%d:\n",l1);
			z = codeGen(t->right);
			fprintf(target_file,"L%d:\n",l2);
			return -1;
		
		case _IF_THEN_ :
			l1 = getLabel();
			x = codeGen(t->left);
			fprintf(target_file,"JZ R%d, %d\n",x,l1);
			freeReg();
			y = codeGen(t->mid);
			fprintf(target_file,"%d:\n",l1);
			return -1;

		case _WHILE_ :
			l1 = getLabel();
			l2 = getLabel();
			addLabel(l1,l2);
			fprintf(target_file,"L%d:\n",l1);
			x = codeGen(t->left);
			fprintf(target_file,"JZ R%d, L%d\n",x,l2);
			freeReg();
			y = codeGen(t->right);
			fprintf(target_file,"JMP L%d\n",l1);
			fprintf(target_file,"L%d:\n",l2);
			delLabel();
			return -1;			

		case _DO_WHILE_ :
			l1 = getLabel();
			l2 = getLabel();
			addLabel(l1,l2);
			fprintf(target_file,"L%d:\n",l1);
			x = codeGen(t->right);
			y = codeGen(t->left);
			fprintf(target_file,"JNZ R%d, L%d\n",y,l1);
			freeReg();
			fprintf(target_file,"L%d:\n",l2);
			delLabel();
			return -1;	

		case _REPEAT_UNTIL_ :
			l1 = getLabel();
			l2 = getLabel();
			addLabel(l1,l2);
			fprintf(target_file, "L%d:\n",l1);
			x = codeGen(t->right);
			y = codeGen(t->left);
			fprintf(target_file, "JZ R%d, L%d\n", y,l1);
			freeReg();
			fprintf(target_file, "L%d:\n",l2);
			delLabel();
			return -1;


	}
}

void xsmterminate()
{
		fprintf(target_file,"INT 10");
}

void addLabel(int a,int b)
{
	struct loopLabel *temp = malloc(sizeof(struct loopLabel));
	temp->br = b;
	temp->cn = a;
	temp->next = loopHead;
	loopHead = temp;
}

void delLabel()
{
	struct loopLabel *temp;
	if(loopHead==NULL)
		return;
	temp = loopHead;
	loopHead = loopHead->next;
	free(temp);
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
		
		case _LT_ :
			return evaluate(t->left) < evaluate(t->right);
		
		case _GT_ :
			return evaluate(t->left) > evaluate(t->right);
		
		case _LE_ :
			return evaluate(t->left) <= evaluate(t->right);
		
		case _GE_ :
			return evaluate(t->left) >= evaluate(t->right);
		
		case _EQ_ :
			return evaluate(t->left) == evaluate(t->right);
		
		case _NE_ :
			return evaluate(t->left) != evaluate(t->right);

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

		case _IF_THEN_ELSE_ :
			if(evaluate(t->left))
				return evaluate(t->mid);
			else
				return evaluate(t->right);
				
		case _IF_THEN_ :
			if(evaluate(t->left))
				return evaluate(t->mid);
		
		case _WHILE_ :
			while(evaluate(t->left))
				evaluate(t->right);
			return -1;	

		case _REPEAT_UNTIL_ :
			do{
				evaluate(t->right);
			}while(!(evaluate(t->left)));
			return -1;

		case _DO_WHILE_ :
			do{
				evaluate(t->right);			
			}while(evaluate(t->left));
			return -1;
	}
}

void typechecker(struct tnode *t)
{
	switch(t->nodetype)
	{

		case _PLUS_ :
		case _MINUS_ :
		case _MUL_ :
		case _DIV_ :
				if ((t->left->type != inttype) || (t->right->type != inttype))
				{
					yyerror("Type Mismatch : Both operands must be integers");
					exit(1);
				}
				break;
	
		case _EQ_ :
		case _NE_ :
		case _LT_ :
		case _GT_ :
		case _LE_ :
		case _GE_ :
				if ((t->left->type != inttype) || (t->right->type != inttype))
				{
					yyerror("Type Mismatch : Both operands must be integers");
					exit(1);
				}
				break;

		case _IF_THEN_ELSE_ :
		case _IF_THEN_ :
		case _WHILE_ :
		case _DO_WHILE_ :
		case _REPEAT_UNTIL_ :

				if((t->left->type != booltype))
				{
					yyerror("Type Mismatch : Expected Boolean Condition");
					exit(1);	
				}
				break;
			
		case _WRITE_ :
				if((t->left->type != inttype))
				{
					yyerror("Invald Argument type for write() function");
					exit(1);
				}
				break; 
  
		case _ASSIGN_ :
		  		if((t->left->type != inttype)||(t->right->type != inttype))
				{
					yyerror("Type Mismatch : Both operands must be integers");
					exit(1);
				} 
				break;
		} 
}	

