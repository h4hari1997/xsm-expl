%{

	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	
%}

%%

[a-z]	{yylval = *yytext; return ID;}
"+" 	{return PLUS;}
"-" 	{return MINUS;}	
"*" 	{return MUL;}
"/" 	{return DIV;}
[ \t] 	{}
[()] 	{return *yytext;}
[\n] 	{return END;}
. 	{yyerror("unknown character\n");exit(1);}

[a][n][d] {return 0;}
%%

int yywrap(void){
	return 1;
}
