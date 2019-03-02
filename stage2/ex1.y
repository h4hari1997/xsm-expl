%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "ex1.h"
	#include "ex1.c"
	int yylex(void);
	int x;
%}

%union
{
	struct tnode *no;
}

%type <no> NUM ID END program E Slist Stmt InputStmt OutputStmt AsgStmt
%token NUM PLUS MINUS MUL DIV ASSIGN START END READ WRITE ID
%left PLUS MINUS
%left MUL DIV

%%

program : START Slist END	{
					$$ = $3;
					x=codeGen($2);
					fclose(target_file);
					printf("Evaluating : \n");
					x=evaluate($2);
					exit(0);
				}
	| START END		{exit(0);};


Slist : Slist Stmt 		{$$ = createTree(0, 0,'0',_BODY_,$1,$2);}
	| Stmt			{$$=$1;};

Stmt : InputStmt ';'		{$$=$1;}
	| OutputStmt ';' 	{$$=$1;}
	| AsgStmt ';'		{$$=$1;};

InputStmt : READ '(' ID ')'		{$$ = createTree(0, 0,'0',_READ_,$3,NULL);};

OutputStmt : WRITE '(' E ')'		{$$ = createTree(0, 0,'0',_WRITE_,$3,NULL);};

AsgStmt : ID ASSIGN E 		{$$ = createTree(0, 0,'0',_ASSIGN_,$1,$3);};

E 	: E PLUS E 	{$$ = createTree(0, 0,'0',_PLUS_,$1,$3);}
	| E MINUS E 	{$$ = createTree(0, 0,'0',_MINUS_,$1,$3);}
	| E MUL E 	{$$ = createTree(0, 0,'0',_MUL_,$1,$3);}
	| E DIV E 	{$$ = createTree(0, 0,'0',_DIV_,$1,$3);}
	| '(' E ')' 		{$$ = $2;}
	| NUM 			{$$ = $1;}
	| ID			{$$ = $1;}
	;


%%

yyerror(char const *s)
{
	printf("yyerror %s",s);
}

	
int main(void) 
{
	target_file=fopen("ex1.xsm","w");	
	fprintf(target_file,"0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file,"MOV SP, 4121\n");
	yyparse();
	return 0;
}
