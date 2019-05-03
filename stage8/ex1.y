%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include "ex1.h"
	#include "ex1.c"
	int yylex(void);
	int yyerror(char const *);
	extern FILE *yyin;
	int a;
	struct Typetable *type,*Ftype,*Ptype,*Ttype;
	struct Classtable *Ctype;
%}

%union
{
	struct tnode *no;
}

%type <no> NUM ID STRING E END Program Slist Body ArgList Field FieldFunction
%type <no> Stmt InputStmt OutputStmt AsgStmt Ifstmt Whilestmt Breakstmt Continuestmt Debugstmt Returnstmt

%token NUM PLUS MINUS MUL DIV MOD LT GT LE GE EQ NE OR AND NOT ID ASSIGN START END DECL ENDDECL BRKP
%token READ WRITE IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL RETURN MAIN
%token TYPE ENDTYPE INITIALIZE ALLOC FREE NIL
%token CLASS ENDCLASS EXTENDS NEW DELETE SELF
%token INT STR STRING

%nonassoc LT GT LE GE NE EQ
%left OR
%left AND
%left PLUS MINUS
%left MUL DIV MOD
%right NOT

%%

Program : TypeDefBlock ClassDefBlock GdeclBlock FDefBlock MainBlock  {exit(0);}
			 |	TypeDefBlock ClassDefBlock GdeclBlock MainBlock						 {exit(0);}
			 |	TypeDefBlock ClassDefBlock MainBlock											 {exit(0);}
			 |	TypeDefBlock ClassDefBlock																 {exit(0);}
					;

TypeDefBlock : TYPE TypeDefList ENDTYPE		{printTypetable();}
              |
									;

TypeDefList : TypeDefList TypeDef
              | TypeDef
								;

TypeDef : ID  {TInstall($1->varname,0,NULL);}   '{' FieldDeclList '}'   {
																				  																Ttype= TLookup($1->varname);
																																					Ttype->fields=Fhead;
																																					Typesizeallocator(Ttype);
																																					Fhead=Ftail=NULL;
																																					Findex=0;
																																		 		}
																																				;

FieldDeclList : FieldDeclList FieldDecl
              | FieldDecl
								;

FieldDecl : TypeName ID ';'	{FInstall(Ttype,$2->varname);};


TypeName     : INT	{Ttype = TLookup("Integer");}
             | STR	{Ttype = TLookup("String");}
             | ID   {Ttype = TLookup($1->varname);}
;

ClassDefBlock : CLASS ClassDefList ENDCLASS		{
																								printClasstable();
																								struct Classtable *Ctemp=Chead;
																								struct Memberfunclist *Mtemp;
																								int f;

																								fprintf(target_file, "L%d:\n", start);
																								fprintf(target_file, "MOV SP, 4095\n");
																								while(Ctemp!=NULL)
																								{
																									bind+=8;
																									Mtemp=Ctemp->Vfuncptr;
																									f=0;
																									while(Mtemp!=NULL)
																									{
																										fprintf(target_file, "MOV R0, F%d\n", Mtemp->flabel);
																										fprintf(target_file, "PUSH R0\n");
																										f++;
																										Mtemp=Mtemp->next;
																									}
																									fprintf(target_file, "MOV R0, -1\n");
																									while(f<8)
																									{
																										fprintf(target_file, "PUSH R0\n");
																										f++;
																									}
																									Ctemp=Ctemp->next;
																								}
																							}

						    |			{fprintf(target_file, "L%d:\n", start);}
									;

ClassDefList : ClassDefList ClassDef
							 | ClassDef
							 	;

ClassDef  : Cname '{'DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'
																																						{
																																							struct Fieldlist *Ftemp=Class->Memberfield;
																																							struct Memberfunclist *Mtemp=Class->Vfuncptr;

																																							a=0;
																																							while(Ftemp!=NULL)
																																							{
																																								Ftemp->fieldIndex=a++;
																																								if(Ftemp->type==NULL)
																																									a++;
																																								Ftemp=Ftemp->next;
																																							}
																																							if(a>8)
																																							{
																																								printf("Class Member Field count exceeded (>8) : %s\n", Class->name);
																																								exit(1);
																																							}
																																							Class->Fieldcount=a;

																																							a=0;
																																							while(Mtemp!=NULL)
																																							{
																																								if(Mtemp->Funcposition==-1)
																																								{
																																									printf("Class Member Function not defined: %s.%s\n", Class->name, Mtemp->name);
																																									exit(1);
																																								}
																																								Mtemp->Funcposition=a++;
																																								Mtemp=Mtemp->next;
																																							}
																																							if(a>8){
																																								printf("Class Member Function count exceeded (>8) : %s\n", Class->name);
																																								exit(1);
																																							}
																																							Class->Methodcount=a;

																																							Class=NULL;
																																						}
								;

Cname   :  ID       				{
																CInstall($1->varname,NULL);
																Class=CLookup($1->varname);
														}

          | ID EXTENDS ID		{
																struct Fieldlist *Ftemp;
																struct Memberfunclist *Mtemp,*Mtemp1;

																CInstall($1->varname, $3->varname);
																Class=CLookup($3->varname);

																Ftemp=Class->Memberfield;
																while(Ftemp!=NULL)
																{
																	if(Ftemp->type!=NULL)
																		Class_Finstall(CLookup($1->varname), Ftemp->type->name, Ftemp->name);
																	else
																		Class_Finstall(CLookup($1->varname), Ftemp->Ctype->name, Ftemp->name);
																	Ftemp=Ftemp->next;
																}

																Mtemp=Class->Vfuncptr;
																while(Mtemp!=NULL)
																{
																	Class_Minstall(CLookup($1->varname), Mtemp->name, Mtemp->type, Mtemp->paramlist);
																	Mtemp1=Class_Mlookup(CLookup($1->varname),Mtemp->name);
																	Mtemp1->Funcposition=0;
																	Mtemp1->flabel=Mtemp->flabel;
																	flabel--;
																	Mtemp=Mtemp->next;
																}
																Class=CLookup($1->varname);

														}
								;

Fieldlists 	:  Fieldlists Fld
								|
										;

Fld  : Type ID ';'		{ 																											//Installing the field to the class
													if(type!=NULL)
															Class_Finstall(Class,type->name,$2->varname);
													else if(Ctype!=NULL)
															Class_Finstall(Class,Ctype->name,$2->varname);
											}
											;

MethodDecl : MethodDecl MDecl
	   					| MDecl
								;

MDecl  : Type ID '(' ParamList ')' ';' 		{																			//Installing the method to class
																						if(Ctype!=NULL)
																						{
																							printf("Return type of method (%s) cannot be a Class type\n",$2->varname);
																							exit(0);
																						}
																						Class_Minstall(Class,$2->varname,type,Phead);
																						Phead=Ptail=NULL;
																						Lhead=Ltail=NULL;
																						localbind=1;
																						parambind=1;
																					}
																						;

MethodDefns : MethodDefns Fdef
            | Fdef
							;

GdeclBlock : DECL GDecllist ENDDECL 	{
																					declprint(Ghead);
																					initialxsmcode();
																					localbind=1;
																					parambind=1;
																			}
		| DECL ENDDECL										{
																					initialxsmcode();
																					localbind=1;
																					parambind=1;
																			}
		;

GDecllist : GDecllist GDecl
	  | GDecl
		;

GDecl : Type GidList	';'		;

Type : INT			{
									type = TLookup("Integer");
									Ctype = NULL;
								}
	| STR					{
									type = TLookup("String");
									Ctype = NULL;
								}
	| ID					{
									type = TLookup($1->varname);
									Ctype = CLookup($1->varname);

									if(type==NULL && Ctype==NULL)
									{
										printf("Unknown type : %s \n",$1->varname);
										exit(0);
									}
								}
	;

GidList : GidList ',' Gid
		| Gid
		;

Gid :  ID 													{GInstall($1->varname,type,Ctype,1,1,_ID_,NULL);}
	| ID '[' NUM ']'									{GInstall($1->varname,type,NULL,$3->val,1,_ARRAY_,NULL);}
	| ID '[' NUM ']' '[' NUM ']'			{GInstall($1->varname,type,NULL,$3->val,$6->val,_MATRIX_,NULL);}
	| MUL ID 												  {GInstall($2->varname,type,NULL,1,1,_PTR_,NULL);}

	| ID '(' ParamList ')'						{
																			GInstall($1->varname,type,NULL,0,0,_FUNC_,Phead);
																			Phead=Ptail=NULL;
																		}
																		;

FDefBlock : FDefBlock Fdef
	| Fdef
	;

Ftype : INT		{Ftype=TLookup("Integer");}
				| STR	{Ftype=TLookup("String");}
				| ID	{
								Ftype=TLookup($1->varname);
								if(Ftype==NULL)
								{
									printf("Unknown type: %s\n", $1->varname);
									exit(0);
								}
							}
;

Fdef : Ftype ID '(' ParamList ')' '{' LdeclBlock Body '}'		{
																																	funcdef(Ftype,Class,$2,Phead,$8);
																																	Phead=Ptail=NULL;
																																	Lhead=Ltail=NULL;
																																	localbind=1;
																																	parambind=1;
																														}
																																;

MainBlock : INT MAIN '(' ')' '{' LdeclBlock Body '}'			{
																																	mainfundef($7);
																																	Lhead=Ltail=NULL;
																																	Phead=Ptail=NULL;
																																	localbind=1;
																																	parambind=1;
																													}
																																;

ParamList : ParamList ',' Param
	  | Param
		|
		;

Param : Ptype ID									{
																  	struct Paramstruct *temp;
																		temp=PLookup($2->varname);
																		if(temp!=NULL)
																		{
																			printf("Mutiple Declaration For %s variable in Paramlist ",$2->varname);
																			exit(0);
																		}
																		PInstall($2->varname,Ptype,_ID_);
																	}

 |		Ptype MUL ID									{
																		  	struct Paramstruct *temp;
																				temp=PLookup($3->varname);
																				if(temp!=NULL)
																				{
																					printf("Mutiple Declaration For %s variable in Paramlist ",$3->varname);
																					exit(0);
																				}
																				PInstall($3->varname,Ptype,_PTR_);
																			}
	;

Ptype : INT			{Ptype = TLookup("Integer");}
	| STR					{Ptype = TLookup("String");}
	| ID					{
									Ptype = TLookup($1->varname);
									if(Ptype==NULL)
									{
										printf("Unknown type : %s \n",$1->varname);
										exit(0);
									}
								}
								;

LdeclBlock : DECL LDecList ENDDECL
	| DECL ENDDECL;

LDecList : LDecList LDecl
	| LDecl;

LDecl : Type IdList ';' ;

IdList : IdList ',' ID 		{LInstall($3->varname,type,_ID_);}
	| IdList ',' MUL ID 		{LInstall($4->varname,type,_PTR_);}
	| ID 										{LInstall($1->varname,type,_ID_);}
	| MUL ID  							{LInstall($2->varname,type,_PTR_);}
	;

Body : START Slist Returnstmt END		{$$ = createTree(0,TLookup("void"),"\0",_BODY_,$2,NULL,$3);}

			| START Returnstmt END				{$$ = createTree(0,TLookup("void"),"\0",_BODY_,NULL,NULL,$2);}
	;

Slist : Slist Stmt 		{$$ = createTree(0,TLookup("void"),"\0",_BODY_,$1,NULL,$2);}
	| Stmt							{$$=$1;}
	;

Stmt : InputStmt ';'	{$$=$1;}
	| OutputStmt ';' 		{$$=$1;}
	| AsgStmt ';'				{$$=$1;}
	| Ifstmt ';'				{$$=$1;}
	| Whilestmt ';'			{$$=$1;}
	| Breakstmt ';'			{$$=$1;}
	| Continuestmt ';'	{$$=$1;}
	| Debugstmt ';'			{$$=$1;}
	;

InputStmt : READ '(' ID ')'											{$$ = createTree(0,TLookup("void"),"\0",_READ_,$3,NULL,NULL);}
			|	READ '(' ID '[' E ']' ')'								{$$ = createTree(0,TLookup("void"),"\0",_READ_ARRAY_,$3,$5,NULL);}
			|	READ '(' ID '[' E ']' '[' E ']' ')'			{$$ = createTree(0,TLookup("void"),"\0",_READ_MATRIX_,$3,$5,$8);}
			| READ '(' MUL ID ')'											{$$ = createTree(0,TLookup("void"),"\0",_READ_PTR_,$4,NULL,NULL);}
			| READ '(' Field ')'											{$$ = createTree(0,TLookup("void"),"\0",_READ_FIELD_,$3,NULL,NULL);}
			;

OutputStmt : WRITE '(' E ')'		{$$ = createTree(0,TLookup("void"),"\0",_WRITE_,$3,NULL,NULL);}
						;

AsgStmt : ID ASSIGN E 										{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_,$1,NULL,$3);}
			| ID '[' E ']' ASSIGN E							{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_ARRAY_,$1,$3,$6);}
			| ID '[' E ']' '[' E ']' ASSIGN E		{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_MATRIX_,$1,createTree(0,TLookup("void"),"\0",_BODY_,$3,$6,NULL),$9);}
			| MUL ID ASSIGN E										{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_PTR_,$2,NULL,$4);}
			| ID ASSIGN INITIALIZE '(' ')'			{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_,$1,NULL,createTree(0,TLookup("Integer"),"\0",_INIT_,NULL,NULL,NULL));}
			| ID ASSIGN ALLOC '(' ')'						{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_,$1,NULL,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
			| Field ASSIGN E										{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,$1,NULL,$3);}
			| Field ASSIGN ALLOC '(' ')'				{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,$1,NULL,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
			| FREE '(' ID ')'										{$$ = createTree(0,TLookup("void"),"\0",_FREE_,$3,NULL,NULL);}
			|	FREE '(' Field ')'								{$$ = createTree(0,TLookup("void"),"\0",_FREE_,$3,NULL,NULL);}
			| ID ASSIGN NEW '(' ID ')'					{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_,$1,$5,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
			| Field ASSIGN NEW '(' ID ')'				{$$ = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,$1,$5,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
			| DELETE '(' Field ')'							{$$ = createTree(0,TLookup("void"),"\0",_FREE_,$3,NULL,NULL);}
			;

Ifstmt : IF '(' E ')' THEN Slist ELSE Slist ENDIF	{$$=createTree(0,TLookup("void"),"\0",_IF_THEN_ELSE_,$3,$6,$8);}
	| IF '(' E ')' THEN Slist ENDIF									{$$=createTree(0,TLookup("void"),"\0",_IF_THEN_,$3,$6,NULL);}
	;

Whilestmt : WHILE '(' E ')' DO Slist ENDWHILE		{$$ = createTree(0,TLookup("void"),"\0",_WHILE_,$3,NULL,$6);}
 		| REPEAT Slist UNTIL '(' E ')'							{$$ = createTree(0,TLookup("void"),"\0",_REPEAT_UNTIL_,$5,NULL,$2);}
		| DO Slist WHILE '(' E ')' 									{$$ = createTree(0,TLookup("void"),"\0",_DO_WHILE_,$5,NULL,$2);}
		;

Breakstmt : BREAK						{$$ = createTree(0,TLookup("void"),"\0",_BREAK_,NULL,NULL,NULL);}
														;

Continuestmt : CONTINUE			{$$ = createTree(0,TLookup("void"),"\0",_CONTINUE_,NULL,NULL,NULL);}
														;

Debugstmt : BRKP						{$$ = createTree(0,TLookup("void"),"\0",_BRKP_,NULL,NULL,NULL);}
														;

Returnstmt	: RETURN E ';'  {$$ = createTree(0,TLookup("void"),"\0",_RET_,$2,NULL,NULL);}
														;

ArgList  : ArgList ',' E		{$$ = createTree(0,TLookup("void"),"\0",_ARG_,$1,NULL,$3);}
	| E												{$$ = createTree(0,TLookup("void"),"\0",_ARG_,NULL,NULL,$1);}
	|													{$$ = NULL;}
	;

Field : ID '.' ID						{
														/*	if(Class!=NULL)
															{
																printf("Private members (%s) cannot be used outside class definition\n",$3->varname);
																exit(0);
															}*/

															struct Fieldlist *Ftemp = FLookup($1->type,$3->varname);
															if(Ftemp==NULL)
															{
																printf("No Field named %s in %s\n",$3->varname,$1->varname);
																exit(0);
															}
															$$ = createTree(0,Ftemp->type,"\0",_FIELD_,$1,NULL,createTree(0,TLookup("void"),"\0",_FIELD_,$3,NULL,NULL));
														}

      | Field '.' ID				{
															if(strcmp($1->varname,"\0")!=0 && $1->type==NULL)
															{
																printf("Private members (%s) cannot be used outside class definition\n",$3->varname);
																exit(0);
															}

															struct tnode *t1,*t2;
															t2 = $1;
															while(t2->right!=NULL)
																	t2=t2->right;

															struct Fieldlist *Ftemp = FLookup($1->type,$3->varname);
															if(Ftemp==NULL)
															{
																printf("No Field named %s in %s \n",$3->varname,t2->left->varname);
																exit(0);
															}

															t1 = createTree(0,TLookup("void"),"\0",_FIELD_,$3,NULL,NULL);
															t2->right = t1;
															$$ = $1;
															$$->type = $3->type;
														}

			| SELF '.' ID					{
																if(Class==NULL)
																{
																	printf("Self cannot be used outside class definition\n");
																	exit(0);
																}

																struct Fieldlist *Ftemp= Class_Flookup(Class,$3->varname);

																if(Ftemp==NULL)
																{
																	printf("No member field named %s in Class %s\n",$3->varname,Class->name);
																	exit(0);
																}

																$$ = createTree(0,Ftemp->type,Class->name,_FIELD_,$3,NULL,NULL);

														}

															;

FieldFunction : ID '.' ID '(' ArgList ')' 	{																	//This will not occur inside a class.
																								struct Gsymbol *Gtemp;
																								Gtemp=GLookup($1->varname);

																								if(Gtemp==NULL)
																								{
																									printf("Unknown identifier: %s\n", $1->varname);
																									exit(0);
																								}

																								if(Class!=NULL)
																								{
																									printf("Self should be used inside class definition\n");
																									exit(0);
																								}

																								if($1->Gentry->Ctype==NULL)
																								{
																									printf("Method (%s) can be called only by an object\n",$3->varname);
																									exit(0);
																								}

																								struct Memberfunclist *Mtemp = Class_Mlookup(Gtemp->Ctype,$3->varname);
																								if(Mtemp==NULL)
																								{
																									printf("No Method named %s in class %s\n",$3->varname,$1->varname);
																									exit(0);
																								}
																								$$ = createTree(0,Mtemp->type,"\0",_METHOD1_,$1,$3,$5);
																							}

							|	SELF '.' ID '(' ArgList ')'		{
 																								if(Class==NULL)
 																								{
 																									printf("Self cannot be used outside class definition\n");
 																									exit(0);
 																								}
 																								struct Memberfunclist *Mtemp = Class_Mlookup(Class,$3->varname);

 																								if(Mtemp==NULL)
 																								{
 																									printf("No method named %s in Class %s\n",$3->varname,Class->name);
 																									exit(0);
 																								}

 																								$$ = createTree(0,Mtemp->type,Class->name,_METHOD2_,$3,NULL,$5);
 																							}

							| Field '.' ID '(' ArgList ')' {
																								struct Fieldlist *Ftemp = Class_Flookup(Class,$1->left->varname);

																								struct Memberfunclist *Mtemp = Class_Mlookup(Ftemp->Ctype,$3->varname);
																								if(Mtemp==NULL)
																								{
																									printf("***No Method named %s in class %s\n",$3->varname,$1->varname);
																									exit(0);
																								}
																								$$ = createTree(0,Mtemp->type,"\0",_METHOD3_,$1,$3,$5);
																						 }

E 	: E PLUS E 							{$$ = createTree(0, TLookup("Integer"), "\0",_PLUS_,$1,NULL,$3);}
	| E MINUS E 							{$$ = createTree(0, TLookup("Integer"), "\0",_MINUS_,$1,NULL,$3);}
	| E MUL E 								{$$ = createTree(0, TLookup("Integer"), "\0",_MUL_,$1,NULL,$3);}
	| E DIV E 								{$$ = createTree(0, TLookup("Integer"), "\0",_DIV_,$1,NULL,$3);}
	| E MOD E 								{$$ = createTree(0, TLookup("Integer"), "\0",_MOD_,$1,NULL,$3);}
	| '(' E ')' 							{$$ = $2;}
	| E EQ E 									{$$ = createTree(0, TLookup("Boolean"), "\0",_EQ_,$1,NULL,$3);}
	| E NE E 									{$$ = createTree(0, TLookup("Boolean"), "\0",_NE_,$1,NULL,$3);}
	| E LE E									{$$ = createTree(0, TLookup("Boolean"), "\0",_LE_,$1,NULL,$3);}
	| E GE E 									{$$ = createTree(0, TLookup("Boolean"), "\0",_GE_,$1,NULL,$3);}
	| E LT E 									{$$ = createTree(0, TLookup("Boolean"), "\0",_LT_,$1,NULL,$3);}
	| E GT E 									{$$ = createTree(0, TLookup("Boolean"), "\0",_GT_,$1,NULL,$3);}
	| E AND E 								{$$ = createTree(0, TLookup("Boolean"), "\0",_AND_,$1,NULL,$3);}
	| E OR E 									{$$ = createTree(0, TLookup("Boolean"), "\0",_OR_,$1,NULL,$3);}
	| E NOT E 								{$$ = createTree(0, TLookup("Boolean"), "\0",_NOT_,$1,NULL,$3);}
	| NUM 										{$$ = $1;}
	| STRING									{$$ = $1;}
	| NIL 										{$$ = createTree(0,TLookup("Type"), "\0", _NULL_, NULL, NULL, NULL);}
	| Field										{$$ = $1;}
	| FieldFunction						{$$ = $1;}
	| ID											{$$ = $1;}
	| ID '[' E ']'						{$$ = createTree(0,$1->type,$1->varname,_ARRAY_,$1,$3,NULL);}
	| ID '[' E ']' '[' E ']'	{$$ = createTree(0,$1->type,$1->varname,_MATRIX_,$1,$3,$6);}
	| MUL ID 									{$$ = createTree(0,$2->type,$2->varname,_PTR_,$2,NULL,NULL);}
	| '&' ID									{$$ = createTree(0,$2->type,$2->varname,_ADDR_,$2,NULL,NULL);}
	| ID '(' ArgList ')'			{$$ = createTree(0,$1->type,$1->varname,_FUNC_,$1,NULL,$3);}
	;

%%

int yyerror(char const *s)
{
	printf("yyerror %s",s);
}


int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1],"r");
	if(fp)
		yyin=fp;
	target_file=fopen("ex1.xsm","w");
	start=getLabel();
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "JMP L%d\n", start);
	TypeTableCreate();
	yyparse();
	return 0;
}
