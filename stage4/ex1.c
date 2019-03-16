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

struct tnode* createTree(int val,int type, char *varname, int nodetype, struct tnode *l, struct tnode *m, struct tnode *r)
{
	struct tnode *temp=(struct tnode*)malloc(sizeof(struct tnode));
	struct Gsymbol *t =malloc(sizeof(Gsymbol));

	temp->varname=malloc(sizeof(varname));

	temp->val = val;
	temp->type = type;
	temp->nodetype = nodetype;
	strcpy(temp->varname,varname);

	switch(nodetype)
	{
		case _ID_ :
						t=Lookup(temp->varname);
						if(t!=NULL)
							temp->type=t->type;
						temp->Gentry=t;
						break;

		case _ARRAY_ :
						t=Lookup(temp->varname);
						if(t!=NULL)
						{
							temp->type=t->type;
						}
						temp->Gentry=t;
						break;

		case _MATRIX_ :
						t=Lookup(temp->varname);
						if(t!=NULL)
						{
								temp->type=t->type;
						}
						temp->Gentry=t;
						break;

		case _PTR_ :
						t=Lookup(temp->varname);
						if(t!=NULL)
						{
								temp->type=t->type;
						}
						temp->Gentry=t;
						break;

		case _ADDR_ :
						t=Lookup(temp->varname);
						if(t!=NULL)
						{
								temp->type=t->type;
						}
						temp->Gentry=t;
						break;
	}

  temp->left = l;
	temp->mid = m;
	temp->right = r;

	typechecker(temp);
	vartypechecker(temp);

	return temp;
}


int codeGen(struct tnode *t)
{
	int x,y,z,l1,l2,l3;
	struct Gsymbol *temp;

	if(t == NULL)
		return -2;

	switch(t->nodetype)
	{
		case _NUM_ :
			x = getReg();
			fprintf(target_file,"MOV R%d, %d\n",x,t->val);
			return x;

		case _STR_ :
			x = getReg();
			fprintf(target_file,"MOV R%d, \"%s\"\n",x,t->varname);
			return x;

		case _ID_ :
			x = getReg();
			temp=Lookup(t->varname);
			if(temp==NULL)
			{
				printf("Variable Not Declared : %s\n", t->varname);
				exit(1);
			}
			fprintf(target_file,"MOV R%d, [%d]\n",x,t->Gentry->binding);
			return x;

		case _ARRAY_ :
			temp = Lookup(t->varname);
			if(temp==NULL)
			{
				printf("Variable Not Declared : %s\n",t->varname);
				exit(1);
			}
			x = codeGen(t->mid);

			fprintf(target_file, "ADD R%d, %d\n",x,temp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n",x,x);

			return x;

			case _MATRIX_ :
				temp = Lookup(t->varname);
				if(temp==NULL)
				{
					printf("Variable Not Declared : %s\n",t->varname);
					exit(1);
				}
				x = codeGen(t->mid);
				y = codeGen(t->right);

				fprintf(target_file, "MUL R%d, %d\n",x,temp->size2);
				fprintf(target_file, "ADD R%d, %d\n",y,temp->binding);
				fprintf(target_file, "ADD R%d, R%d\n",x,y);
				fprintf(target_file, "MOV R%d, [R%d]\n",x,x);

				freeReg();
				return x;

			case _PTR_ :
				temp = Lookup(t->varname);
				if(temp==NULL)
				{
					printf("Variable Not Declared : %s\n",t->varname);
					exit(1);
				}
				x = codeGen(t->left);

				fprintf(target_file, "MOV R%d, [R%d]\n",x,x);

				return x;

			case _ADDR_ :
				temp = Lookup(t->varname);
				if(temp==NULL)
				{
					printf("Variable Not Declared : %s\n",t->varname);
					exit(1);
				}
				x = getReg();
				y = t->left->Gentry->binding;

				fprintf(target_file, "MOV R%d, %d\n",x,y);

				return x;

		case _BRKP_ :
			fprintf(target_file,"BRKP\n");
			return -1;

		case _ASSIGN_ :
			x = codeGen(t->right);
			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->varname);
				exit(1);
			}
			y = temp->binding;
			fprintf(target_file,"MOV [%d], R%d\n",y,x);
			freeReg();
			return -1;

		case _ASSIGN_ARRAY_ :
			x = codeGen(t->mid);
			y = codeGen(t->right);
			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}
			z = temp->binding;
			fprintf(target_file,"ADD R%d, %d\n",x,z);
			fprintf(target_file,"MOV [R%d], R%d\n",x,y);
			freeReg();
			freeReg();
			return -1;

		case _ASSIGN_MATRIX_ :
				x = codeGen(t->mid->left);
				y = codeGen(t->mid->mid);
				z = codeGen(t->right);

				temp=Lookup(t->left->varname);
				if(temp==NULL)
				{
					printf("Unknown variable: %s\n", t->left->varname);
					exit(1);
				}

				fprintf(target_file,"MUL R%d, %d\n",x,temp->size2);
				fprintf(target_file,"ADD R%d, %d\n",y,temp->binding);
				fprintf(target_file,"ADD R%d, R%d\n",x,y);

				fprintf(target_file,"MOV [R%d], R%d\n",x,z);
				freeReg();
				freeReg();
				freeReg();
				return -1;

		case _ASSIGN_PTR_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			fprintf(target_file,"MOV [R%d], R%d\n",x,y);
			freeReg();
			freeReg();
			return -1;

		case _ASSIGN_PTR_ADDR_ :

			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			temp=Lookup(t->right->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->right->varname);
				exit(1);
			}

			x=getReg();
			fprintf(target_file,"MOV R%d, %d\n",x,t->right->Gentry->binding);
			fprintf(target_file,"MOV [%d], R%d\n",t->left->Gentry->binding,x);
			freeReg();
			return -1;

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

		case _MOD_ :
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"MOD R%d, R%d\n",x,y);
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
			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}
			y = getReg();
			fprintf(target_file,"MOV R%d, \"Read\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -1\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, %d\n",y,(temp->binding));
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

		case _READ_ARRAY_ :
			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}
			y = getReg();
			z = codeGen(t->mid);
			fprintf(target_file,"ADD R%d, %d\n",z,temp->binding);
			fprintf(target_file,"MOV R%d, \"Read\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -1\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, R%d\n",y,z);
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
			freeReg();
			return -1;

			case _READ_MATRIX_ :
				temp=Lookup(t->left->varname);
				if(temp==NULL)
				{
					printf("Unknown variable: %s\n", t->left->varname);
					exit(1);
				}
				x = getReg();
				y = codeGen(t->mid);
				z = codeGen(t->right);

				fprintf(target_file,"MUL R%d, %d\n",y,temp->size2);
				fprintf(target_file,"ADD R%d, R%d\n",y,z);
				fprintf(target_file,"ADD R%d, %d\n",y,temp->binding);
				fprintf(target_file,"MOV R%d, \"Read\"\n",x);
				fprintf(target_file,"PUSH R%d\n",x);
				fprintf(target_file,"MOV R%d, -1\n",x);
				fprintf(target_file,"PUSH R%d\n",x);
				fprintf(target_file,"MOV R%d, R%d\n",x,y);
				fprintf(target_file,"PUSH R%d\n",x);
				fprintf(target_file,"PUSH R%d\n",x);
				fprintf(target_file,"PUSH R%d\n",x);
				fprintf(target_file,"CALL 0\n");
				fprintf(target_file,"POP R%d\n",x);
				fprintf(target_file,"POP R%d\n",x);
				fprintf(target_file,"POP R%d\n",x);
				fprintf(target_file,"POP R%d\n",x);
				fprintf(target_file,"POP R%d\n",x);
				freeReg();
				freeReg();
				freeReg();
				return -1;

		case _READ_PTR_ :
			temp=Lookup(t->left->varname);
			if(temp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}
			y = getReg();
			fprintf(target_file,"MOV R%d, \"Read\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -1\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, %d\n",y,(temp->binding));
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
			fprintf(target_file,"JZ R%d, L%d\n",x,l1);
			freeReg();
			y = codeGen(t->mid);
			fprintf(target_file,"L%d:\n",l1);
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
			l3 = getLabel();
			addLabel(l3,l2);
			fprintf(target_file,"L%d:\n",l1);
			x = codeGen(t->right);
			fprintf(target_file,"L%d:\n",l3);
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

struct Gsymbol *Lookup(char * name)
{
	struct Gsymbol *temp = Ghead;
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void Install(char *name, int type, int size1, int size2, int nodetype)
{
	struct Gsymbol *temp;
	temp=Lookup(name);
	if(temp!=NULL)
	{
		printf("Multiple Declaration for %s\n",name);
		exit(0);
	}

	temp=malloc(sizeof(struct Gsymbol));

	temp->name=malloc(sizeof(name));
	strcpy(temp->name,name);
	temp->type=type;
	temp->size1=size1;
	temp->size2=size2;
	temp->nodetype=nodetype;

	temp->next=NULL;

	if(bind+size1*size2>5120)
	{
		printf("Stack Overflow\n");
		exit(0);
	}

	temp->binding=bind;

	bind+=size1*size2;

	if(Ghead==NULL)
		Ghead=Gtail=temp;
	else
	{
		Gtail->next=temp;
		Gtail=temp;
	}
}

void declprint(struct Gsymbol *a)
{
	while(a!=Gtail->next)
	{
		printf("***************************\n");
		printf("%s\n",a->name);
		printf("%s\n",printtype(a->type));
		printf("%d\n",a->size1);
		printf("%d\n",a->size2);
		printf("%s\n",printvartype(a->nodetype));
		printf("%d\n",a->binding);
		printf("***************************\n");
		a=a->next;
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
		case _MOD_ :
				if ((t->left->type != inttype) || (t->right->type != inttype))
				{
					yyerror("Type Mismatch : Both operands must be integers\n");
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
					yyerror("Type Mismatch : Both operands must be integers\n");
					exit(1);
				}
				break;

		case _ARRAY_ :
				if(t->mid->type!=inttype)
				{
					yyerror("Type Mismatch : Array Index must be a integer\n");
					exit(1);
				}
				break;

		case _MATRIX_ :
				if((t->mid->type!=inttype)||(t->right->type!=inttype))
				{
					yyerror("Type Mismatch : Matrix Index must be a integer\n");
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
					yyerror("Type Mismatch : Expected Boolean Condition\n");
					exit(1);
				}
				break;

		case _WRITE_ :
				if((t->left->type != inttype)&&(t->left->type != stringtype))
				{
					yyerror("Invald Argument type for write() function\n");
					exit(1);
				}
				break;

		case _ASSIGN_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers\n");
						exit(1);
					}
					break;

		case _ASSIGN_ARRAY_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers\n");
						exit(1);
					}
					if(t->mid->type != inttype )
					{
						yyerror("Array index must be integer type\n");
						exit(1);
					}
					break;

		case _ASSIGN_MATRIX_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers\n");
						exit(1);
					}
					if( (t->mid->left->type != inttype) || (t->mid->mid->type != inttype) )
					{
						yyerror("Matrix index must be integer type\n");
						exit(1);
					}
					break;

		case _ASSIGN_PTR_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers\n");
						exit(1);
					}
					break;

		case _ASSIGN_PTR_ADDR_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers\n");
						exit(1);
					}
					if(t->left->Gentry->nodetype != _PTR_ )
					{
						yyerror("Pointer Variable should be used for storing address\n");
						exit(1);
					}
					break;

		case _READ_ARRAY_ :
					if(t->mid->type != inttype )
					{
						yyerror("Array index must be integer\n");
						exit(1);
					}
					break;


		case _READ_MATRIX_ :
					if( (t->mid->type != inttype) || (t->right->type != inttype) )
					{
						yyerror("Matrix index must be integers\n");
						exit(1);
					}
					break;

		}
}

void vartypechecker(struct tnode *t)
{
			struct Gsymbol *id;

			switch(t->nodetype)
			{
					case _ASSIGN_ :
					case _READ_ :
								id = t->left->Gentry;
								if( (id->nodetype != _ID_) && (id->nodetype != _PTR_) )
								{
									yyerror("Incorrect ID type used (Variable or Pointer Expected)\n");
									exit(1);
								}
								break;

					case _ASSIGN_ARRAY_ :
					case _READ_ARRAY_ :
								id = t->left->Gentry;
								if(id->nodetype != _ARRAY_ )
								{
									yyerror("Incorrect ID type used (Array Expected)\n");
									exit(1);
								}
								break;

					case _ASSIGN_MATRIX_ :
					case _READ_MATRIX_ :
								id = t->left->Gentry;
								if(id->nodetype != _MATRIX_)
								{
									yyerror("Incorrect ID type used (Matrix Expected)\n");
									exit(1);
								}
								break;

				  case _ASSIGN_PTR_ :
					case _ASSIGN_PTR_ADDR_ :
					case _READ_PTR_ :
								id = t->left->Gentry;
								if(id->nodetype != _PTR_)
								{
									yyerror("Incorrect ID type used (Pointer Expected)\n");
									exit(1);
								}
								break;
				}
}

void inorderprint(struct tnode *t)
{
	if(t!=NULL)
	{
		inorderprint(t->left);
		if(t->nodetype!=_STR_)
		{
			printf("Value : %d ------ ",t->val);
			printf("Varname : %s ------ ",t->varname);
		}
		else
		{
			printf("Value : %s ------ ",t->varname);
			printf("Varname :  ------ ");
		}

		printf("Type : %s ------ ",printtype(t->type));
		nodetypeprint(t);
		inorderprint(t->mid);
		inorderprint(t->right);
	}
}

char *printtype(int type)
{
	char *boolean=strdup("booltype");
	char *integer=strdup("inttype");
	char *string=strdup("stringtype");
	char *tless=strdup("       ");
	if(type==booltype)
		return boolean;
	else if(type==inttype)
		return integer;
	else if(type==stringtype)
		return string;
	else
		return tless;
}

char *printvartype(int nodetype)
{
	char *var=strdup("_ID_");
	char *array=strdup("_ARRAY_");
	char *matrix=strdup("_MATRIX_");
	char *pointer=strdup("_PTR_");
	char *other=strdup("       ");

	if(nodetype==_ID_)
		return var;
	else if(nodetype==_ARRAY_)
		return array;
	else if(nodetype==_MATRIX_)
		return matrix;
	else if(nodetype==_PTR_)
		return pointer;
	else
		return other;
}

void nodetypeprint(struct tnode *t)
{
	switch(t->nodetype)
	{
		case _ID_ :
					printf("Nodetype : ID\n");
					break;
		case _NUM_ :
					printf("Nodetype : NUM\n");
					break;
		case _ASSIGN_ :
					printf("Nodetype : ASSIGN\n");
					break;
		case _PLUS_ :
					printf("Nodetype : PLUS\n");
					break;
		case _MINUS_ :
					printf("Nodetype : MINUS\n");
					break;
		case _MUL_ :
					printf("Nodetype : MUL\n");
					break;
		case _DIV_ :
					printf("Nodetype : DIV\n");
					break;
		case _MOD_ :
					printf("Nodetype : MOD\n");
					break;
		case _BODY_ :
					printf("Nodetype : BODY\n");
					break;
		case _WRITE_ :
					printf("Nodetype : WRITE\n");
					break;
		case _READ_ :
					printf("Nodetype : READ\n");
					break;
		case _EQ_ :
					printf("Nodetype : EQ\n");
					break;
		case _NE_ :
					printf("Nodetype : NE\n");
					break;
		case _LT_ :
					printf("Nodetype : LT\n");
					break;
		case _GT_ :
					printf("Nodetype : GT\n");
					break;
		case _LE_ :
					printf("Nodetype : LE\n");
					break;
		case _GE_ :
					printf("Nodetype : GE\n");
					break;
		case _IF_THEN_ELSE_ :
					printf("Nodetype : IF THEN ELSE\n");
					break;
		case _IF_THEN_ :
					printf("Nodetype : IF\n");
					break;
		case _WHILE_ :
					printf("Nodetype : WHILE\n");
					break;
		case _BREAK_ :
					printf("Nodetype : BREAK\n");
					break;
		case _CONTINUE_ :
					printf("Nodetype : CONTINUE\n");
					break;
		case _REPEAT_UNTIL_ :
					printf("Nodetype : REPEAT UNTIL\n");
					break;
		case _DO_WHILE_ :
					printf("Nodetype : DO WHILE\n");
					break;
		case _STR_ :
					printf("Nodetype : STR\n");
					break;
		case _ARRAY_ :
					printf("Nodetype : ARRAY\n");
					break;
		case _ASSIGN_ARRAY_ :
					printf("Nodetype : ASSIGN ARRAY\n");
					break;
		case _READ_ARRAY_ :
					printf("Nodetype : READ ARRAY\n");
					break;
		case _MATRIX_ :
					printf("Nodetype : MATRIX\n");
					break;
		case _ASSIGN_MATRIX_ :
					printf("Nodetype : ASSIGN MATRIX\n");
					break;
		case _READ_MATRIX_ :
					printf("Nodetype : READ MATRIX\n");
					break;
		case _PTR_ :
					printf("Nodetype : PTR\n");
					break;
		case _ASSIGN_PTR_ :
					printf("Nodetype : ASSIGN POINTER\n");
					break;
		case _ASSIGN_PTR_ADDR_ :
					printf("Nodetype : ASSIGN POINTER ADDRESS\n");
					break;
		case _READ_PTR_ :
					printf("Nodetype : READ POINTER\n");
					break;
	}
}

/*
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
*/
