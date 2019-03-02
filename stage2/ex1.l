%{
	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	#include "ex1.h"
	int number;
	char varname;

%}

%%

"begin"		{return START;}

"end"		{return END;}

"read"		{return READ;}

"write"		{return WRITE;}

[a-z]		{
			varname = *yytext;
			yylval.no = createTree(0,0,varname,_ID_,NULL,NULL);
			return ID;
		}


[0-9]+ 		{
			number = atoi(yytext); 
			yylval.no = createTree(number,0,'0',_NUM_,NULL,NULL);
			return NUM;
		}

"="		{return ASSIGN;}
"+" 		{return PLUS;}
"-" 		{return MINUS;}
"*" 		{return MUL;}
"/" 		{return DIV;}
[\n \t] 	{}
[()] 		{return *yytext;}
[;]		{return *yytext;}
.		{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) 
{
	return 1;
}
