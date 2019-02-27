%{

	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	#include <string.h>
	
%}

%%

[a-z]+ {
	yylval = strdup(yytext);
	return ID;
	}
"+" 	{return PLUS;}
"-" 	{return MINUS;}	
"*" 	{return MUL;}
"/" 	{return DIV;}
[ \t] 	{}
[()] 	{return *yytext;}
[\n] 	{return END;}
. 	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void){
	return 1;
}
