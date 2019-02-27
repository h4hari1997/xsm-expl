%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	int c=0;
%}


%%

start : stmt '\n'		{printf("%d ",c);exit(1);}
	;

stmt : '(' abc ')'	{}
	; 
 
abc : abc '(' abc ')' abc {c++;}
	| ' ' {}
;
%%

yyerror()
{
	printf("Error");
}

yylex()
{
	int c;
	c = getchar();
	return c;
}

main(){
	yyparse();
	return 1;
}
