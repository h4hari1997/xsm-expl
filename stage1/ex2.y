%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "ex2.h"
	#include "ex2.c"
	int yylex(void);
	int x;

%}

%union{
	struct tnode *no;
}

%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program	: expr END 		{
					$$ = $2;
					x=codeGen($1);
					exit(1);
				}
	;

expr 	: expr PLUS expr 	{$$ = makeOperatorNode('+',$1,$3);}
	| expr MINUS expr 	{$$ = makeOperatorNode('-',$1,$3);}
	| expr MUL expr 	{$$ = makeOperatorNode('*',$1,$3);}
	| expr DIV expr 	{$$ = makeOperatorNode('/',$1,$3);}
	| '(' expr ')' 		{$$ = $2;}
	| NUM 			{$$ = $1;}
	;

%%

yyerror(char const *s)
{
	printf("yyerror %s",s);
}

	
int main(void) 
{
	target_file=fopen("ex2.xsm","w");
	fprintf(target_file,"0\n2056\n0\n0\n0\n0\n0\n0\n");
	yyparse();
	return 0;
}
