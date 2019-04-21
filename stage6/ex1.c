struct tnode* createTree(int val,struct Typetable *type, char *varname, int nodetype, struct tnode *l, struct tnode *m, struct tnode *r)
{
	struct tnode *temp=(struct tnode*)malloc(sizeof(struct tnode));

	struct Lsymbol *l1 = NULL;
	struct Gsymbol *g1 = NULL;
	struct Paramstruct *p1 = NULL;

	temp->varname=malloc(sizeof(varname));

	temp->val = val;
	temp->type = type;
	temp->nodetype = nodetype;
	strcpy(temp->varname,varname);

	switch(nodetype)
	{
		case _ID_ :
						l1=LLookup(temp->varname);
						p1=PLookup(temp->varname);
						g1=GLookup(temp->varname);

						if(l1!=NULL)
							temp->type=l1->type;
						else if(p1!=NULL)
							temp->type=p1->type;
						else if(g1!=NULL)
							temp->type=g1->type;

						temp->Lentry=l1;
						temp->Gentry=g1;
						break;

		case _ARRAY_ :
						g1=GLookup(temp->varname);
						if(g1!=NULL)
							temp->type=g1->type;

						temp->Lentry=l1;
						temp->Gentry=g1;
						break;

		case _MATRIX_ :
						g1=GLookup(temp->varname);
						if(g1!=NULL)
								temp->type=g1->type;

						temp->Lentry=l1;
						temp->Gentry=g1;
						break;

		case _PTR_ :
						l1=LLookup(temp->varname);
						p1=PLookup(temp->varname);
						g1=GLookup(temp->varname);

						if(l1!=NULL)
							temp->type=l1->type;
						else if(p1!=NULL)
							temp->type=p1->type;
						else if(g1!=NULL)
							temp->type=g1->type;

						temp->Lentry=l1;
						temp->Gentry=g1;

						break;

		case _ADDR_ :
						l1=LLookup(temp->varname);
						p1=PLookup(temp->varname);
						g1=GLookup(temp->varname);

						if(l1!=NULL)
							temp->type=l1->type;
						else if(p1!=NULL)
							temp->type=p1->type;
						else if(g1!=NULL)
							temp->type=g1->type;

						temp->Lentry=l1;
						temp->Gentry=g1;

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
	int x,y,z,l1,l2,l3,b,lvarcount;

	struct tnode *p;
	struct Lsymbol *Ltemp;
	struct Paramstruct *Ptemp;
	struct Gsymbol *Gtemp;
	struct Typetable *Ttemp;
	struct Fieldlist *Ftemp;

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
			Ltemp=LLookup(t->varname);
			Ptemp=PLookup(t->varname);
			Gtemp=GLookup(t->varname);

			if((Ltemp!=NULL) && (Ptemp!=NULL))
			{
				printf("Multiple Declaration Local variable and Formal Argument\n");
				exit(0);
			}

			if(Ltemp!=NULL)
			{
					fprintf(target_file,"MOV R%d, BP\n",x);
					fprintf(target_file, "ADD R%d, %d\n", x, Ltemp->binding);
					fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
			}

			else if(Ptemp!=NULL)
			{
					fprintf(target_file, "MOV R%d, BP\n", x);
					fprintf(target_file, "SUB R%d, %d\n", x, Ptemp->binding+2);
					fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
			}

			else if(Gtemp!=NULL)
					fprintf(target_file,"MOV R%d, [%d]\n",x,t->Gentry->binding);

			else
			{
				printf("Variable Not Declared : %s\n", t->varname);
				exit(1);
			}
			return x;

		case _FIELD_ :
			x = getReg();
			Ltemp=LLookup(t->left->varname);
			Ptemp=PLookup(t->left->varname);
			Gtemp=GLookup(t->left->varname);

			if((Ltemp!=NULL) && (Ptemp!=NULL))
			{
				printf("Multiple Declaration Local variable and Formal Argument\n");
				exit(0);
			}

		if(Ltemp!=NULL)
			{
					Ttemp=Ltemp->type;
					fprintf(target_file,"MOV R%d, BP\n",x);
					fprintf(target_file, "ADD R%d, %d\n", x, Ltemp->binding);
					fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
			}

			else if(Ptemp!=NULL)
			{
					Ttemp=Ptemp->type;
					fprintf(target_file, "MOV R%d, BP\n", x);
					fprintf(target_file, "SUB R%d, %d\n", x, Ptemp->binding+2);
					fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
			}

			else if(Gtemp!=NULL)
			{
					Ttemp=Gtemp->type;
					fprintf(target_file,"MOV R%d, [%d]\n",x,Gtemp->binding);
			}

			else
			{
				printf("Variable Not Declared : %s\n", t->left->varname);
				exit(1);
			}

			p=t;

			while(p->right!=NULL)
			{
				Ftemp=FLookup(Ttemp,p->right->left->varname);

				if(Ftemp==NULL)
				{
					printf("Unknown identifier in FIELD: %s\n", p->right->left->varname);
					exit(1);
				}

				fprintf(target_file, "ADD R%d, %d\n",x,Ftemp->fieldIndex);
				fprintf(target_file, "MOV R%d, [R%d]\n",x,x);

				Ttemp=Ftemp->type;
				p=p->right;
			}
			return x;

		case _ARRAY_ :
			Gtemp = GLookup(t->varname);
			if(Gtemp==NULL)
			{
				printf("Variable Not Declared : %s\n",t->varname);
				exit(1);
			}
			x = codeGen(t->mid);

			fprintf(target_file, "ADD R%d, %d\n",x,Gtemp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n",x,x);

			return x;

		case _MATRIX_ :
				Gtemp = GLookup(t->varname);
				if(Gtemp==NULL)
				{
					printf("Variable Not Declared : %s\n",t->varname);
					exit(1);
				}
				x = codeGen(t->mid);
				y = codeGen(t->right);

				fprintf(target_file, "MUL R%d, %d\n",x,Gtemp->size2);
				fprintf(target_file, "ADD R%d, %d\n",y,Gtemp->binding);
				fprintf(target_file, "ADD R%d, R%d\n",x,y);
				fprintf(target_file, "MOV R%d, [R%d]\n",x,x);

				freeReg();
				return x;

		case _PTR_ :
				x = getReg();
				Ltemp=LLookup(t->varname);
				Ptemp=PLookup(t->varname);
				Gtemp=GLookup(t->varname);

				if((Ltemp!=NULL) && (Ptemp!=NULL))
				{
					printf("Multiple Declaration Local variable and Formal Argument\n");
					exit(0);
				}

				if(Ltemp!=NULL)
				{
						fprintf(target_file,"MOV R%d, BP\n",x);
						fprintf(target_file, "ADD R%d, %d\n", x, Ltemp->binding);
						fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
						fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
				}

				else if(Ptemp!=NULL)
				{
						fprintf(target_file, "MOV R%d, BP\n", x);
						fprintf(target_file, "SUB R%d, %d\n", x, Ptemp->binding+2);
						fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
						fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
				}

				else if(Gtemp!=NULL)
				{
						fprintf(target_file,"MOV R%d, [%d]\n",x,t->Gentry->binding);
						fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
				}

				else
				{
					printf("Variable Not Declared : %s\n", t->varname);
					exit(1);
				}
				return x;

		case _ADDR_ :
				Ltemp = LLookup(t->varname);
				Ptemp = PLookup(t->varname);
				Gtemp = GLookup(t->varname);

				x = codeGen(t->left);

				if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
				{
					printf("Variable Not Declared : %s\n",t->varname);
					exit(1);
				}
				return x;

		case _FUNC_ :
				Gtemp = GLookup(t->varname);
				if(Gtemp==NULL)
				{
					printf("Function %s not declared\n",t->varname);
					exit(0);
				}

				Ptemp = Gtemp->paramlist;
				p = t->right;

				x=y=0;
				while(Ptemp!=NULL)
				{
						x++;
						Ptemp=Ptemp->next;
				}
				while(p!=NULL)
				{
						y++;
						p=p->left;
				}
//printf("%d %d ",x,y);
				if(x!=y)
				{
					printf("Incorrect No of Arguments for Function %s\n",t->varname);
					exit(0);
				}

				x=0;
				y--;
				Ptemp=Gtemp->paramlist;

				while(Ptemp!=NULL)
				{
					z=0;
					p=t->right;
					while(z<y)
					{
						z++;
						p=p->left;
					}
					if(Ptemp->type!=p->right->type)
					{
						printf("-----%s ------ %s---",printType(p->right->type),printType(Ptemp->type));
						printf("Incorrect Parameter (%s) type for function %s\n",Ptemp->name,t->varname);
						exit(0);
					}
					y--;
					Ptemp=Ptemp->next;
				}

				for(y=-1;y<reg;y++)													//Push Existing Registers
					fprintf(target_file, "PUSH R%d\n",y+1);


				reg=-1;

				x=codeGen(t->right);												//Push Arguments

				x=getReg();
				fprintf(target_file,"PUSH R%d\n",x);
				fprintf(target_file,"CALL F%d\n",Gtemp->flabel);
				fprintf(target_file,"POP R%d\n",x);

				freeReg();

				z=0;
				Ptemp=Gtemp->paramlist;
				x=getReg();

				while(Ptemp!=NULL)
				{
					fprintf(target_file,"POP R%d\n",x);			//Pop Arguments
					Ptemp=Ptemp->next;
					z++;
				}

				freeReg();
				reg=y;

				for(;y>=0;y--)
				{
					fprintf(target_file, "POP R%d\n", y);			//Pop Registers
					z++;
				}

				x=getReg();
				fprintf(target_file, "MOV R%d, SP\n",x);
				fprintf(target_file,"ADD R%d, %d\n",x,z+1);
				fprintf(target_file,"MOV R%d, [R%d]\n",x,x);

				return x;

		case _ARG_ :
			if(t!=NULL)						//Pushing Arguments in Reverse Order
			{
					x=codeGen(t->right);
					freeReg();
					fprintf(target_file,"PUSH R%d\n",x);
					x=codeGen(t->left);
					freeReg();
			}
			return -1;
			break;

		case _RET_ :
			x = getReg();
			lvarcount=0;

			for(Ltemp=Lhead;Ltemp!=NULL;Ltemp=Ltemp->next)
				lvarcount++;

			freeReg();
			x = codeGen(t->left);
			y = getReg();
			fprintf(target_file, "MOV R%d, BP\n",y );
			fprintf(target_file, "SUB R%d, 2\n",y );
			fprintf(target_file, "MOV [R%d], R%d\n",y,x );				//Put return value in return space
			freeReg();
			freeReg();
			fprintf(target_file,"SUB SP, %d\n",lvarcount);			// Pop Local Variables
			fprintf(target_file,"MOV BP,[SP]\n");
			fprintf(target_file,"POP R0\n");
			fprintf(target_file,"RET\n");
			break;

		case _INIT_ :
			x = getReg();
			fprintf(target_file, "MOV R%d, \"Heapset\"\n", x);
			fprintf(target_file, "PUSH R%d\n", x);
			fprintf(target_file, "PUSH R%d\n", x);
			fprintf(target_file, "PUSH R%d\n", x);
			fprintf(target_file, "PUSH R%d\n", x);
			fprintf(target_file, "PUSH R%d\n", x);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", x);
			fprintf(target_file, "POP R%d\n", x);
			fprintf(target_file, "POP R%d\n", x);
			fprintf(target_file, "POP R%d\n", x);
			fprintf(target_file, "POP R%d\n", x);
			fprintf(target_file, "MOV R%d, 0\n", x);
			return x;
			break;

		case _ALLOC_ :
			x = getReg();
			y = getReg();
			fprintf(target_file, "MOV R%d, \"Alloc\"\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", x);
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			freeReg();
			return x;
			break;

		case _FREE_ :
			x = codeGen(t->left);
			y = getReg();
			fprintf(target_file, "MOV R%d, \"Free\"\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", x);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "PUSH R%d\n", y);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			fprintf(target_file, "POP R%d\n", y);
			freeReg();
			freeReg();
			return -1;
			break;

		case _NULL_:
			x = getReg();
			fprintf(target_file, "MOV R%d, -1\n", x);
			return x;

		case _BRKP_ :
			fprintf(target_file,"BRKP\n");
			return -1;

		case _ASSIGN_ :
			x = codeGen(t->right);
			y = getReg();

			Ltemp=LLookup(t->left->varname);
			Ptemp=PLookup(t->left->varname);
			Gtemp=GLookup(t->left->varname);

			if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			if(Ltemp!=NULL)
			{
				fprintf(target_file, "MOV R%d, BP\n", y);
				fprintf(target_file, "ADD R%d, %d\n", y, Ltemp->binding);
				fprintf(target_file, "MOV [R%d], R%d\n", y, x);
			}
			else if(Ptemp!=NULL)
			{
				fprintf(target_file, "MOV R%d, BP\n", y);
				fprintf(target_file, "SUB R%d, %d\n", y, Ptemp->binding+2);
				fprintf(target_file, "MOV [R%d], R%d\n", y, x);
			}
			else if(Gtemp!=NULL)
					fprintf(target_file, "MOV [%d], R%d\n", Gtemp->binding, x);
			freeReg();
			freeReg();
			return -1;

		case _ASSIGN_ARRAY_ :
			x = codeGen(t->mid);
			y = codeGen(t->right);
			Gtemp=GLookup(t->left->varname);
			if(Gtemp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}
			z = Gtemp->binding;
			fprintf(target_file,"ADD R%d, %d\n",x,z);
			fprintf(target_file,"MOV [R%d], R%d\n",x,y);
			freeReg();
			freeReg();
			return -1;

		case _ASSIGN_MATRIX_ :
				x = codeGen(t->mid->left);
				y = codeGen(t->mid->mid);
				z = codeGen(t->right);

				Gtemp=GLookup(t->left->varname);
				if(Gtemp==NULL)
				{
					printf("Unknown variable: %s\n", t->left->varname);
					exit(1);
				}

				fprintf(target_file,"MUL R%d, %d\n",x,Gtemp->size2);
				fprintf(target_file,"ADD R%d, %d\n",y,Gtemp->binding);
				fprintf(target_file,"ADD R%d, R%d\n",x,y);

				fprintf(target_file,"MOV [R%d], R%d\n",x,z);
				freeReg();
				freeReg();
				freeReg();
				return -1;

		case _ASSIGN_PTR_ :
			x = codeGen(t->left);
			y = codeGen(t->right);

			Ltemp=LLookup(t->left->varname);
			Ptemp=PLookup(t->left->varname);
			Gtemp=GLookup(t->left->varname);

			fprintf(target_file,"MOV R%d, [R%d]\n",x,x);
			fprintf(target_file,"MOV [R%d], R%d\n",x,y);

			if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			freeReg();
			freeReg();
			return -1;

		case _ASSIGN_FIELD_ :
			x = codeGen(t->right);
			y = getReg();

			Ltemp=LLookup(t->left->left->varname);
			Ptemp=PLookup(t->left->left->varname);
			Gtemp=GLookup(t->left->left->varname);

			if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			if(Ltemp!=NULL)
			{
				Ttemp=Ltemp->type;
				fprintf(target_file, "MOV R%d, BP\n", y);
				fprintf(target_file, "ADD R%d, %d\n", y, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", y,y);
			}
			else if(Ptemp!=NULL)
			{
				Ttemp=Ptemp->type;
				fprintf(target_file, "MOV R%d, BP\n", y);
				fprintf(target_file, "SUB R%d, %d\n", y, Ptemp->binding+2);
				fprintf(target_file, "MOV R%d, [R%d]\n", y,y);
			}
			else if(Gtemp!=NULL)
			{
					Ttemp=Gtemp->type;
					fprintf(target_file, "MOV R%d, [%d]\n", y,Gtemp->binding);
			}

			p=t->left;

			while(p->right->right!=NULL)
			{
				Ftemp=FLookup(Ttemp,p->right->left->varname);
				if(Ftemp==NULL)
				{
					printf("Unknown identifier in FIELD: %s\n", p->right->left->varname);
					exit(1);
				}
				fprintf(target_file, "ADD R%d, %d\n",y,Ftemp->fieldIndex);
				fprintf(target_file, "MOV R%d, [R%d]\n", y,y);

				Ttemp=Ftemp->type;
				p=p->right;
			}

			Ftemp=FLookup(Ttemp,p->right->left->varname);
			if(Ftemp==NULL)
			{
				printf("Unknown identifier in FIELD: %s\n", p->right->left->varname);
				exit(1);
			}
			fprintf(target_file, "ADD R%d, %d\n",y,Ftemp->fieldIndex);
			fprintf(target_file, "MOV [R%d], R%d\n", y,x);

			freeReg();
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

		case _AND_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"MUL R%d, R%d\n",x,y);
			freeReg();
			return x;

		case _OR_:
			x = codeGen(t->left);
			y = codeGen(t->right);
			fprintf(target_file,"ADD R%d, R%d\n",x,y);
			fprintf(target_file,"MOV R%d, 1\n",y);
			fprintf(target_file,"GE R%d, R%d\n",x,y);
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
			Ltemp=LLookup(t->left->varname);
			Ptemp=PLookup(t->left->varname);
			Gtemp=GLookup(t->left->varname);

			x=getReg();

			if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			if(Ltemp!=NULL)
			{
				fprintf(target_file, "MOV R%d, BP\n", x);
				fprintf(target_file, "ADD R%d, %d\n", x, Ltemp->binding);
			}
			else if(Ptemp!=NULL)
			{
				fprintf(target_file, "MOV R%d, BP\n", x);
				fprintf(target_file, "SUB R%d, %d\n", x, Ptemp->binding+2);
			}
			else if(Gtemp!=NULL)
					fprintf(target_file, "MOV R%d, %d\n",x, Gtemp->binding);

			y = getReg();
			fprintf(target_file,"MOV R%d, \"Read\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -1\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, R%d\n",y,x);
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

		case _READ_ARRAY_ :
			Gtemp=GLookup(t->left->varname);
			if(Gtemp==NULL)
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}
			y = getReg();
			z = codeGen(t->mid);
			fprintf(target_file,"ADD R%d, %d\n",z,Gtemp->binding);
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
				Gtemp=GLookup(t->left->varname);
				if(Gtemp==NULL)
				{
					printf("Unknown variable: %s\n", t->left->varname);
					exit(1);
				}
				x = getReg();
				y = codeGen(t->mid);
				z = codeGen(t->right);

				fprintf(target_file,"MUL R%d, %d\n",y,Gtemp->size2);
				fprintf(target_file,"ADD R%d, R%d\n",y,z);
				fprintf(target_file,"ADD R%d, %d\n",y,Gtemp->binding);
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
			Ltemp=LLookup(t->left->varname);
			Ptemp=PLookup(t->left->varname);
			Gtemp=GLookup(t->left->varname);

			x=codeGen(t->left);
			fprintf(target_file,"MOV R%d, [R%d]\n",x,x);

			if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
			{
				printf("Unknown variable: %s\n", t->left->varname);
				exit(1);
			}

			y = getReg();
			fprintf(target_file,"MOV R%d, \"Read\"\n",y);
			fprintf(target_file,"PUSH R%d\n",y);
			fprintf(target_file,"MOV R%d, -1\n",y);
			fprintf(target_file,"MOV R%d, %d\n",y,x);
			fprintf(target_file,"PUSH R%d\n",y);
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

			case _READ_FIELD_ :
				Ltemp=LLookup(t->left->left->varname);
				Ptemp=PLookup(t->left->left->varname);
				Gtemp=GLookup(t->left->left->varname);

				x=getReg();

				if( (Ltemp==NULL) && (Ptemp==NULL) && (Gtemp==NULL) )
				{
					printf("Unknown variable: %s\n", t->left->varname);
					exit(1);
				}

				if(Ltemp!=NULL)
				{
					Ttemp=Ltemp->type;
					fprintf(target_file, "MOV R%d, BP\n", x);
					fprintf(target_file, "ADD R%d, %d\n", x, Ltemp->binding);
					fprintf(target_file, "MOV R%d, [R%d]\n", x,x);
				}
				else if(Ptemp!=NULL)
				{
					Ttemp=Ptemp->type;
					fprintf(target_file, "MOV R%d, BP\n", x);
					fprintf(target_file, "SUB R%d, %d\n", x, Ptemp->binding+2);
					fprintf(target_file, "MOV R%d, [R%d]\n", x,x);
				}
				else if(Gtemp!=NULL)
				{
						Ttemp=Gtemp->type;
						fprintf(target_file, "MOV R%d, [%d]\n",x, Gtemp->binding);
				}

				p=t->left;

				while(p->right->right!=NULL)
				{
					Ftemp=FLookup(Ttemp,p->right->left->varname);
					if(Ftemp==NULL)
					{
						printf("Unknown identifier in FIELD: %s\n", p->right->left->varname);
						exit(1);
					}
					fprintf(target_file, "ADD R%d, %d\n",x,Ftemp->fieldIndex);
					fprintf(target_file, "MOV R%d, [R%d]\n", x,x);

					Ttemp=Ftemp->type;
					p=p->right;
				}

				Ftemp=FLookup(Ttemp,p->right->left->varname);

				if(Ftemp==NULL)
				{
					printf("Unknown identifier in FIELD: %s\n", p->right->left->varname);
					exit(1);
				}
				fprintf(target_file, "ADD R%d, %d\n",x,Ftemp->fieldIndex);

				y = getReg();
				fprintf(target_file,"MOV R%d, \"Read\"\n",y);
				fprintf(target_file,"PUSH R%d\n",y);
				fprintf(target_file,"MOV R%d, -1\n",y);
				fprintf(target_file,"PUSH R%d\n",y);
				fprintf(target_file,"MOV R%d, R%d\n",y,x);
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

void initialxsmcode()
{
			fprintf(target_file,"0\n2056\n0\n0\n0\n0\n0\n0\n");
			fprintf(target_file,"MOV SP, %d\n",bind-1);
			fprintf(target_file,"MOV BP, %d\n",bind);
			fprintf(target_file,"PUSH R0\n");
			fprintf(target_file,"CALL MAIN\n");
			fprintf(target_file,"INT 10\n");
}

void mainfundef(struct tnode *body)
{
		struct Lsymbol *Ltemp;

		if(body->right->left->type!=TLookup("Integer"))
		{
			printf("Return type of Main Function must be Integer\n");
			exit(0);

		}
		fprintf(target_file, "MAIN:\n");
		fprintf(target_file, "PUSH BP\n");
		fprintf(target_file, "MOV BP, SP\n");

		int lvarcount=0;

		for(Ltemp=Lhead;Ltemp!=NULL;Ltemp=Ltemp->next)
			lvarcount++;

		fprintf(target_file,"ADD SP, %d\n",lvarcount);	//Pushing Local Variables

		codeGen(body);

}
void funcdef(struct Typetable *type,struct tnode *func,struct Paramstruct *Phead,struct tnode *body)
{
	if(body->right->left->type!=type)
	{
		printf("Return type of Function %s not correct\n",getFunctionname(flabel-1));
		exit(0);
	}

	int a;
	struct Lsymbol *Ltemp;
	struct Gsymbol *Gtemp;
	struct Paramstruct *Ptemp1,*Ptemp2;

	Gtemp=GLookup(func->varname);

	if(Gtemp==NULL||Gtemp->nodetype!=_FUNC_)
	{
		printf("Function not declared %s\n",func->varname);
		exit(0);
	}

	if(Gtemp->type!=type)
	{
			printf("Return type not matching for Function %s",func->varname);
			exit(0);
	}

	Ptemp1=Gtemp->paramlist;
	Ptemp2=Phead;

	a=checkequivalence(Ptemp1,Ptemp2);

	if(a==-1)
	{
		printf("Formal parameters and Declaration not matching for Function %s",func->varname);
		exit(0);
	}

	fprintf(target_file,"F%d:\n",Gtemp->flabel);
	fprintf(target_file,"PUSH BP\n");
	fprintf(target_file,"MOV BP, SP\n");

	int lvarcount=0;

	for(Ltemp=Lhead;Ltemp!=NULL;Ltemp=Ltemp->next)
		lvarcount++;


	fprintf(target_file,"ADD SP, %d\n",lvarcount);	//Push Local Variables

	codeGen(body);


	//deallocate($8);

	/*while(Lhead!=NULL)
	{
		printf("name %s\n",Lhead->name );
		Lhead=Lhead->next;
	}*/
}

int checkequivalence(struct Paramstruct *declparameters,struct Paramstruct *formalparameters)
{
	struct Paramstruct *a,*b;
	a=declparameters;
	b=formalparameters;

	while(a!=NULL&&b!=NULL)
	{
		if((a->type==b->type)&&(strcmp(a->name,b->name)==0))
		{
			a=a->next;
			b=b->next;
		}
		else
			return -1;
	}

	if(a!=NULL||b!=NULL)
		return -1;

	else
		return 0;
}

char *getFunctionname(int label)
{
	struct Gsymbol *temp = Ghead;
	char *x="No function with this Label";

	while(temp!=NULL)
	{
		if(temp->flabel==label)
			return temp->name;
		temp=temp->next;
	}
	return x;
}

int getReg()
{
	if(reg>=20){
		printf("Out of registers\n");
		exit(1);
	}
	return ++reg;
}


struct Gsymbol *GLookup(char * name)
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

void GInstall(char *name, struct Typetable *type, int size1, int size2, int nodetype, struct Paramstruct *paramlist)
{
	struct Gsymbol *temp;
	temp=GLookup(name);
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
	temp->paramlist=paramlist;

	temp->next=NULL;

	if(bind+size1*size2>5120)
	{
		printf("Stack Overflow\n");
		exit(0);
	}

	if(temp->nodetype==_FUNC_)
	{
			temp->flabel=getFlabel();
			temp->binding=-1;
	}
	else
	{
		temp->flabel=-1;
		temp->binding=bind;
	}

	bind+=size1*size2;

	if(Ghead==NULL)
		Ghead=Gtail=temp;
	else
	{
		Gtail->next=temp;
		Gtail=temp;
	}
}

struct Lsymbol *LLookup(char * name)
{
	struct Lsymbol *temp = Lhead;
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void LInstall(char *name, struct Typetable *type, int nodetype)
{
	struct Lsymbol *temp;
	temp=LLookup(name);
	if(temp!=NULL)
	{
		printf("Multiple Declaration for %s\n",name);
		exit(0);
	}

	temp=malloc(sizeof(struct Lsymbol));

	temp->name=malloc(sizeof(name));
	strcpy(temp->name,name);
	temp->type=type;
	temp->nodetype=nodetype;
	temp->binding=localbind++;

	temp->next=NULL;

	if(Lhead==NULL)
		Lhead=Ltail=temp;
	else
	{
		Ltail->next=temp;
		Ltail=temp;
	}
}

struct Paramstruct *PLookup(char * name)
{
	struct Paramstruct *temp = Phead;
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void PInstall(char *name, struct Typetable *type, int nodetype)
{
	struct Paramstruct *temp;
	temp=PLookup(name);

	if(temp!=NULL)
	{
		printf("Multiple declaration : %s\n",name);
		exit(0);
	}

	temp=malloc(sizeof(struct Paramstruct));

	temp->name=malloc(sizeof(name));
	strcpy(temp->name,name);
	temp->type=type;
	temp->nodetype=nodetype;
	temp->binding=parambind++;

	temp->next=NULL;

	if(Phead==NULL)
		Phead=Ptail=temp;
	else
	{
		Ptail->next=temp;
		Ptail=temp;
	}

}

void TypeTableCreate()
{
			TInstall("Integer",1,NULL);
			TInstall("String",1,NULL);
			TInstall("Boolean",0,NULL);
			TInstall("Null",0,NULL);
			TInstall("Void",0,NULL);
			TInstall("Type",0,NULL);
}

struct Typetable* TLookup(char *name)
{
			struct Typetable *temp=Thead;
			while(temp!=NULL)
			{
					if(strcmp(temp->name,name)==0)
							return temp;
					temp=temp->next;
			}
			return NULL;
}

void TInstall(char *name,int size, struct Fieldlist *fields)
{
	struct Typetable *temp;
	temp=TLookup(name);

	if(temp!=NULL)
	{
		printf("Type %s already exists\n",name);
		exit(0);
	}
	temp=malloc(sizeof(struct Typetable));
	temp->name=malloc(sizeof(name));

	strcpy(temp->name,name);
	temp->size=size;
	temp->fields=fields;
	temp->next=NULL;

	if(Thead==NULL)
			Thead=Ttail=temp;
	else
	{
		Ttail->next=temp;
		Ttail=temp;
	}

}

struct Fieldlist* FLookup(struct Typetable *type, char *name)
{
		struct Fieldlist *temp = type->fields;

		while(temp!=NULL)
		{
			if(strcmp(temp->name,name)==0)
				return temp;
			temp = temp->next;
		}
		return NULL;
}

void FInstall(struct Typetable *type,char *name)
{

	if(type==NULL)
	{
		printf("Type not installed for field : %s\n",name);
		exit(0);
	}

	struct Fieldlist *temp = Fhead;
	while(temp!=NULL)
	{
			if(strcmp(temp->name,name)==0)
			{
				printf("Mutiple Fields by the same name %s\n",name);
				exit(0);
			}
			temp=temp->next;
	}

	temp=malloc(sizeof(struct Fieldlist));
	temp->name=malloc(sizeof(name));

	strcpy(temp->name,name);
	temp->fieldIndex = Findex++;
	temp->type=type;
	temp->next=NULL;

	if(Fhead==NULL)
			Fhead=Ftail=temp;
	else
	{
			Ftail->next=temp;
			Ftail=temp;
	}

}

int GetSize (struct Typetable *type)
{
		if(type!=NULL)
			return type->size;
		else
			return -1;
}

void Typesizeallocator (struct Typetable *type)
{
	struct Fieldlist *temp = type->fields;
	int count=0;

	while(temp!=NULL)
	{
			count++;
			temp = temp->next;
	}
	type->size = count;

	if(count>8)
	{
		printf("Type size limit exceeded for Type %s\n",type->name);
		exit(0);
	}
}

void printTypetable()
{
	struct Typetable *temp = Thead;
	while(temp!=NULL)
	{
			printf("**********************\n");
			printf("Type name : %s\n",temp->name);
			printf("Type size : %d\n",temp->size);
			printf("Type Fields : \n");
			printField(temp);
			printf("**********************\n");
			temp = temp->next;
	}
}

void printField(struct Typetable *type)
{
		struct Fieldlist *temp = type->fields;

		while(temp!=NULL)
		{
			printFieldType(temp->type);
			printf("  Field name : %s  ",temp->name);
			printf("Field index : %d\n",temp->fieldIndex);
			temp = temp->next;
		}
}

void printFieldType(struct Typetable *type)
{
		printf("Field Type : %s",type->name);
}

void freeReg()
{
	if(reg>=0)
		reg--;
}

int getLabel()
{
	return label++;
}

int getFlabel()
{
	return flabel++;
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


void vartypechecker(struct tnode *t)
{
			struct Lsymbol *id1;
			struct Gsymbol *id2;
			struct Paramstruct *id3;

			switch(t->nodetype)
			{
					case _ASSIGN_ :
					case _READ_ :
								id1 = t->left->Lentry;
								id2 = t->left->Gentry;
//id3 = t->left->Gentry->paramlist;

								if(id1!=NULL)
								{
										if( (id1->nodetype != _ID_) && (id1->nodetype != _PTR_) )
										{
											yyerror("Incorrect ID type used (Variable or Pointer Expected)\n");
											exit(1);
										}
								}
								else if(id2!=NULL)
								{
										if( (id2->nodetype != _ID_) && (id2->nodetype != _PTR_) )
										{
											yyerror("Incorrect ID type used (Variable or Pointer Expected)\n");
											exit(1);
										}
								}

								break;

					case _ASSIGN_ARRAY_ :
					case _READ_ARRAY_ :
								id2 = t->left->Gentry;
								if(id2->nodetype != _ARRAY_ )
								{
									yyerror("Incorrect ID type used (Array Expected)\n");
									exit(1);
								}
								break;

					case _ASSIGN_MATRIX_ :
					case _READ_MATRIX_ :
								id2 = t->left->Gentry;
								if(id2->nodetype != _MATRIX_)
								{
									yyerror("Incorrect ID type used (Matrix Expected)\n");
									exit(1);
								}
								break;

				  case _ASSIGN_PTR_ :
					case _ASSIGN_PTR_ADDR_ :
					case _READ_PTR_ :
								id1 = t->left->Lentry;
								id2 = t->left->Gentry;

								if(id1!=NULL)
								{
										if( id1->nodetype != _PTR_ )
										{
											yyerror("Incorrect ID type used (Pointer Expected)\n");
											exit(1);
										}
								}
								else if(id2!=NULL)
								{
										if( id2->nodetype != _PTR_ )
										{
											yyerror("Incorrect ID type used (Pointer Expected)\n");
											exit(1);
										}
								}

								break;

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
				if ((t->left->type != TLookup("Integer")) || (t->right->type != TLookup("Integer")))
				{
					yyerror("Type Mismatch : Both operands must be integers (Arithmetic)\n");
					exit(1);
				}
				break;

		case _EQ_ :
		case _NE_ :
		case _LT_ :
		case _GT_ :
		case _LE_ :
		case _GE_ :
				if ((t->right->type == TLookup("Type")) && (t->left->type==TLookup("Integer") || t->left->type==TLookup("String")))
				{
					yyerror("Relational Operator Type Mismatch\n");
					exit(1);
				}

			 if( (t->right->type!=TLookup("Type")) && ( (t->left->type!=TLookup("Integer")) || (t->right->type!=TLookup("Integer")) ))
				{
					yyerror("Type Mismatch : Both operands must be integers (Relational)\n");
					exit(1);
				}
				break;

		case _AND_ :
		case _OR_ :
		case _NOT_ :
				if ((t->left->type != TLookup("Boolean")) || (t->right->type != TLookup("Boolean")))
				{
					//printf("%d",t->left->type);
					yyerror("Type Mismatch : Both operands must be boolean (Logical)\n");
					exit(1);
				}
				break;

		case _ARRAY_ :
				if(t->mid->type!=TLookup("Integer"))
				{
					yyerror("Type Mismatch : Array Index must be a integer\n");
					exit(1);
				}
				break;

		case _MATRIX_ :
				if((t->mid->type!=TLookup("Integer"))||(t->right->type!=TLookup("Integer")))
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

				if((t->left->type != TLookup("Boolean")))
				{
					yyerror("Type Mismatch : Expected Boolean Condition\n");
					exit(1);
				}
				break;
/*
		case _WRITE_ :
				if((t->left->type != TLookup("Integer"))&&(t->left->type != TLookup("String")))
				{
					yyerror("Invalid Argument type for write() function\n");
					exit(1);
				}
				break;*/

		case _ASSIGN_ :

					if( ( t->right->type==TLookup("Type") ) && ( ( t->left->type==TLookup("Integer") ) || ( t->left->type==TLookup("String") ) ))
					{
						yyerror("Type Mismatch : User Defined Type (Assignment)\n");
						exit(1);
					}
		  		else if( (t->right->type!=TLookup("Type")) && (t->left->type != t->right->type) )
					{
						yyerror("Type Mismatch : Both operands must be integers (Assignment)\n");
						exit(1);
					}
					break;

		case _ASSIGN_ARRAY_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers (Array Assignment)\n");
						exit(1);
					}
					if(t->mid->type != TLookup("Integer") )
					{
						yyerror("Array index must be integer type\n");
						exit(1);
					}
					break;

		case _ASSIGN_MATRIX_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers (Matrix Assignment)\n");
						exit(1);
					}
					if( (t->mid->left->type != TLookup("Integer")) || (t->mid->mid->type != TLookup("Integer")) )
					{
						yyerror("Matrix index must be integer type\n");
						exit(1);
					}
					break;

		case _ASSIGN_PTR_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers (Pointer assignment)\n");
						exit(1);
					}
					break;

		case _ASSIGN_PTR_ADDR_ :
		  		if(t->left->type != t->right->type )
					{
						yyerror("Type Mismatch : Both operands must be integers (Address to Pointer assignment)\n");
						exit(1);
					}
					if(t->left->Gentry->nodetype != _PTR_ )
					{
						yyerror("Pointer Variable should be used for storing address\n");
						exit(1);
					}
					break;

		case _READ_ARRAY_ :
					if(t->mid->type != TLookup("Integer") )
					{
						yyerror("Array index must be integer\n");
						exit(1);
					}
					break;


		case _READ_MATRIX_ :
					if( (t->mid->type != TLookup("Integer")) || (t->right->type != TLookup("Integer")) )
					{
						yyerror("Matrix index must be integers\n");
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

		printf("Type : %s ------ ",printType(t->type));
		nodetypeprint(t);
		inorderprint(t->mid);
		inorderprint(t->right);
	}
}

char *printType(struct Typetable *type)
{
	return type->name;
}

char *printvartype(int nodetype)
{
	char *var=strdup("_ID_");
	char *array=strdup("_ARRAY_");
	char *matrix=strdup("_MATRIX_");
	char *pointer=strdup("_PTR_");
	char *function=strdup("_FUNC_");
	char *other=strdup("       ");

	if(nodetype==_ID_)
		return var;
	else if(nodetype==_ARRAY_)
		return array;
	else if(nodetype==_MATRIX_)
		return matrix;
	else if(nodetype==_PTR_)
		return pointer;
	else if(nodetype==_FUNC_)
		return function;
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
		case _AND_ :
					printf("Nodetype : AND\n");
					break;
		case _OR_ :
					printf("Nodetype : OR\n");
					break;
		case _NOT_ :
					printf("Nodetype : NOT\n");
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
		case _ADDR_ :
					printf("Nodetype : ADDRESS\n");
					break;
		case _FUNC_ :
					printf("Nodetype : FUNCTION\n");
					break;
		case _RET_ :
					printf("Nodetype : RETURN\n");
					break;
		case _ARG_ :
					printf("Nodetype : ARGUMENT\n");
					break;
	}
}

void declprint(struct Gsymbol *a)
{
	while(a!=NULL)
	{
		printf("***************************\n");
		printf("Name : %s\n",a->name);
		printf("Type : %s\n",printType(a->type));
		printf("Size1 : %d\n",a->size1);
		printf("Size2 : %d\n",a->size2);
		printf("Binding Address : %d\n",a->binding);
		printf("Flabel : %d\n",a->flabel);
		printf("Declaration Type : %s\n",printvartype(a->nodetype));
		if(a->flabel!=-1)
		{
			printf("Parameters are : \n");
			struct Paramstruct *temp = a->paramlist;
			while(temp!=NULL)
			{
				printf("Type : %s  ",printType(temp->type) );
				printf("Name : %s\n",temp->name);
				temp=temp->next;
			}
		}
		printf("***************************\n");
		a=a->next;
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
