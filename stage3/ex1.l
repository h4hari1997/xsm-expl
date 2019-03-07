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

"if"		{return IF;}

"then"		{return THEN;}

"else"		{return ELSE;}

"endif"		{return ENDIF;}

"while"		{return WHILE;}

"do"		{return DO;}

"endwhile"	{return ENDWHILE;}

"break"		{return BREAK;}

"continue"	{return CONTINUE;}

"repeat"	{return REPEAT;}

"until"		{return UNTIL;}



[a-z]		{
			varname = *yytext;
			yylval.no = createTree(0,inttype,varname,_ID_,NULL,NULL,NULL);
			return ID;
		}


[0-9]+ 		{
			number = atoi(yytext); 
			yylval.no = createTree(number,inttype,'0',_NUM_,NULL,NULL,NULL);
			return NUM;
		}

"="		{return ASSIGN;}
"+" 		{return PLUS;}
"-" 		{return MINUS;}
"*" 		{return MUL;}
"/" 		{return DIV;}
"<"		{return LT;}
">"		{return GT;}
"<="		{return LE;}
">="		{return GE;}
"!="		{return NE;}
"=="		{return EQ;}

[\n \t] 	{}

[{}()] 		{return *yytext;}

[&.,;\"]	{return *yytext;}

.		{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) 
{
	return 1;
}
