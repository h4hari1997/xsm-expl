%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include "ex1.h"
	#include "ex1.c"
	int yylex(void);
	int yyerror(char const *);
	extern FILE *yyin;
	int a;
%}

%union
{
	struct tnode *no;
}

%type <no> NUM ID END program E Slist Stmt InputStmt OutputStmt AsgStmt Ifstmt Whilestmt Breakstmt Continuestmt
%token NUM PLUS MINUS MUL DIV LT GT LE GE EQ NE ID ASSIGN START END
%token READ WRITE IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL 
%nonassoc LT GT LE GE NE EQ
%left PLUS MINUS
%left MUL DIV

%%

program : START Slist END	{
					$$ = $3;
					a=codeGen($2);
					xsmterminate();
					fclose(target_file);
					printf("Evaluating : \n");
					a=evaluate($2);
					printf("Evaluation Over \n");
					exit(0);
				}
	| START END		{exit(0);};


Slist : Slist Stmt 		{$$ = createTree(0, -1,'0',_BODY_,$1,NULL,$2);}
	| Stmt			{$$=$1;};

Stmt : InputStmt ';'		{$$=$1;}
	| OutputStmt ';' 	{$$=$1;}
	| AsgStmt ';'		{$$=$1;}
	| Ifstmt ';'		{$$=$1;}
	| Whilestmt ';'		{$$=$1;}
	| Breakstmt ';'		{$$=$1;}
	| Continuestmt ';'	{$$=$1;};


InputStmt : READ '(' ID ')'		{$$ = createTree(0, -1,'0',_READ_,$3,NULL,NULL);};

OutputStmt : WRITE '(' E ')'		{$$ = createTree(0, -1,'0',_WRITE_,$3,NULL,NULL);};

AsgStmt : ID ASSIGN E 			{$$ = createTree(0, inttype,'0',_ASSIGN_,$1,NULL,$3);};
	
Ifstmt : IF '(' E ')' THEN Slist ELSE Slist ENDIF	{$$ = createTree(0, -1,'0',_IF_THEN_ELSE_,$3,$6,$8);}
	| IF '(' E ')' THEN Slist ENDIF		{$$ = createTree(0, -1,'0',_IF_THEN_,$3,$6,NULL);};

Whilestmt : WHILE '(' E ')' DO Slist ENDWHILE		{$$ = createTree(0,-1,'0',_WHILE_,$3,NULL,$6);}
 		| REPEAT Slist UNTIL '(' E ')'	{$$ = createTree(0,-1,'0',_REPEAT_UNTIL_,$5,NULL,$2);}
		| DO Slist WHILE '(' E ')' 	{$$ = createTree(0,-1,'0',_DO_WHILE_,$5,NULL,$2);};

Breakstmt : BREAK			{$$ = createTree(0,-1,'0',_BREAK_,NULL,NULL,NULL);};

Continuestmt : CONTINUE			{$$ = createTree(0,-1,'0',_CONTINUE_,NULL,NULL,NULL);};

E 	: E PLUS E 	{$$ = createTree(0, inttype,'0',_PLUS_,$1,NULL,$3);}
	| E MINUS E 	{$$ = createTree(0, inttype,'0',_MINUS_,$1,NULL,$3);}
	| E MUL E 	{$$ = createTree(0, inttype,'0',_MUL_,$1,NULL,$3);}
	| E DIV E 	{$$ = createTree(0, inttype,'0',_DIV_,$1,NULL,$3);}
	| '(' E ')' 	{$$ = $2;}
	| E EQ E 	{$$ = createTree(0, booltype,'0',_EQ_,$1,NULL,$3);}
	| E NE E 	{$$ = createTree(0, booltype,'0',_NE_,$1,NULL,$3);}
	| E LE E	{$$ = createTree(0, booltype,'0',_LE_,$1,NULL,$3);}
	| E GE E 	{$$ = createTree(0, booltype,'0',_GE_,$1,NULL,$3);}
	| E LT E 	{$$ = createTree(0, booltype,'0',_LT_,$1,NULL,$3);}
	| E GT E  	{$$ = createTree(0, booltype,'0',_GT_,$1,NULL,$3);}
	| NUM 		{$$ = $1;}
	| ID		{$$ = $1;}
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
	fprintf(target_file,"MOV SP, 4121\n");
	yyparse();
	return 0;
}
