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
	int a,type;
%}

%union
{
	struct tnode *no;
}

%type <no> NUM ID STRING END program E Slist Stmt InputStmt OutputStmt AsgStmt Ifstmt Whilestmt Breakstmt Continuestmt Debugstmt Body
%token NUM PLUS MINUS MUL DIV MOD LT GT LE GE EQ NE ID ASSIGN START END DECL ENDDECL BRKP
%token READ WRITE IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL
%token INT STR STRING
%nonassoc LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%

program : Declarations Body 	{	inorderprint($2);
																fprintf(target_file,"MOV SP, %d\n",bind);
																codeGen($2);
																xsmterminate();
																exit(0);
															}
															;

Declarations : DECL Decllist ENDDECL	{
											declprint(Ghead);
										}
		| DECL ENDDECL
		;

Decllist : Decllist Decl
	  | Decl
		;

Decl : Type Varlist	';'		;

Type : INT			{type = inttype;}
	| STR					{type = stringtype;}
	;

Varlist : Varlist ',' ID										{Install($3->varname,type,1,1,_ID_);}
	| Varlist ',' ID '[' NUM ']'							{Install($3->varname,type,$5->val,1,_ARRAY_);}
	| Varlist ',' ID '[' NUM ']' '[' NUM ']'	{Install($3->varname,type,$5->val,$8->val,_MATRIX_);}
	| Varlist ',' MUL ID 											{Install($4->varname,type,1,1,_PTR_);}
	| ID 																			{Install($1->varname,type,1,1,_ID_);}
	| ID '[' NUM ']'													{Install($1->varname,type,$3->val,1,_ARRAY_);}
	| ID '[' NUM ']' '[' NUM ']'							{Install($1->varname,type,$3->val,$6->val,_MATRIX_);}
	| MUL ID 																	{Install($2->varname,type,1,1,_PTR_);}
	;

Body : START Slist END		{
															$$ = $2;
													}
	| START END							{$$ = NULL;}
	;

Slist : Slist Stmt 		{$$ = createTree(0,-1,"\0",_BODY_,$1,NULL,$2);}
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


InputStmt : READ '(' ID ')'											{$$ = createTree(0,-1,"\0",_READ_,$3,NULL,NULL);}
			|	READ '(' ID '[' E ']' ')'								{$$ = createTree(0,-1,"\0",_READ_ARRAY_,$3,$5,NULL);}
			|	READ '(' ID '[' E ']' '[' E ']' ')'			{$$ = createTree(0,-1,"\0",_READ_MATRIX_,$3,$5,$8);}
			| READ '(' MUL ID ')'											{$$ = createTree(0,-1,"\0",_READ_PTR_,$4,NULL,NULL);}
			;

OutputStmt : WRITE '(' E ')'		{$$ = createTree(0,-1,"\0",_WRITE_,$3,NULL,NULL);}
						;

AsgStmt : ID ASSIGN E 										{$$ = createTree(0,-1,"\0",_ASSIGN_,$1,NULL,$3);}
			| ID '[' E ']' ASSIGN E							{$$ = createTree(0,-1,"\0",_ASSIGN_ARRAY_,$1,$3,$6);}
			| ID '[' E ']' '[' E ']' ASSIGN E		{$$ = createTree(0,-1,"\0",_ASSIGN_MATRIX_,$1,createTree(0,-1,"\0",_BODY_,$3,$6,NULL),$9);}
			| MUL ID ASSIGN E										{$$ = createTree(0,-1,"\0",_ASSIGN_PTR_,$2,NULL,$4);}
			;

Ifstmt : IF '(' E ')' THEN Slist ELSE Slist ENDIF	{$$=createTree(0,-1,"\0",_IF_THEN_ELSE_,$3,$6,$8);}
	| IF '(' E ')' THEN Slist ENDIF									{$$=createTree(0, -1,"\0",_IF_THEN_,$3,$6,NULL);}
	;

Whilestmt : WHILE '(' E ')' DO Slist ENDWHILE		{$$=createTree(0,-1,"\0",_WHILE_,$3,NULL,$6);}
 		| REPEAT Slist UNTIL '(' E ')'							{$$ = createTree(0,-1,"\0",_REPEAT_UNTIL_,$5,NULL,$2);}
		| DO Slist WHILE '(' E ')' 									{$$ = createTree(0,-1,"\0",_DO_WHILE_,$5,NULL,$2);}
		;

Breakstmt : BREAK						{$$ = createTree(0,-1,"\0",_BREAK_,NULL,NULL,NULL);}
														;

Continuestmt : CONTINUE			{$$ = createTree(0,-1,"\0",_CONTINUE_,NULL,NULL,NULL);}
														;

Debugstmt : BRKP						{$$ = createTree(0,-1,"\0",_BRKP_,NULL,NULL,NULL);}
														;

E 	: E PLUS E 							{$$ = createTree(0, inttype, "\0",_PLUS_,$1,NULL,$3);}
	| E MINUS E 							{$$ = createTree(0, inttype, "\0",_MINUS_,$1,NULL,$3);}
	| E MUL E 								{$$ = createTree(0, inttype, "\0",_MUL_,$1,NULL,$3);}
	| E DIV E 								{$$ = createTree(0, inttype, "\0",_DIV_,$1,NULL,$3);}
	| E MOD E 								{$$ = createTree(0, inttype, "\0",_MOD_,$1,NULL,$3);}
	| '(' E ')' 							{$$ = $2;}
	| E EQ E 									{$$ = createTree(0, booltype, "\0",_EQ_,$1,NULL,$3);}
	| E NE E 									{$$ = createTree(0, booltype, "\0",_NE_,$1,NULL,$3);}
	| E LE E									{$$ = createTree(0, booltype, "\0",_LE_,$1,NULL,$3);}
	| E GE E 									{$$ = createTree(0, booltype, "\0",_GE_,$1,NULL,$3);}
	| E LT E 									{$$ = createTree(0, booltype, "\0",_LT_,$1,NULL,$3);}
	| E GT E 									{$$ = createTree(0, booltype, "\0",_GT_,$1,NULL,$3);}
	| NUM 										{$$ = $1;}
	| STRING									{$$ = $1;}
	| ID											{$$ = $1;}
	| ID '[' E ']'						{$$ = createTree(0,$1->type,$1->varname,_ARRAY_,$1,$3,NULL);}
	| ID '[' E ']' '[' E ']'	{$$ = createTree(0,$1->type,$1->varname,_MATRIX_,$1,$3,$6);}
	| MUL ID 									{$$ = createTree(0,$2->type,$2->varname,_PTR_,$2,NULL,NULL);}
	| '&' ID									{$$ = createTree(0,$2->type,$2->varname,_ADDR_,$2,NULL,NULL);}
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
	fprintf(target_file,"0\n2056\n0\n0\n0\n0\n0\n0\n");
	yyparse();
	return 0;
}
