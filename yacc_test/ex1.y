%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>

%}

%token DIGIT
%left '+'
%left '*'

%%

start : stmt '\n'		{printf("\n");exit(1);}
	;

stmt : 'i' 'f' '(' bool ')' 't' 'h' 'e' 'n' stmt 'e' 'l' 's' 'e' stmt		{printf("if ");}
	| expr
	;

bool : DIGIT '=''=' DIGIT		{printf("%d==%d ",$1,$4);}
	| DIGIT '!''=' DIGIT		{printf("%d!=%d ",$1,$4);}
	;

expr :  expr '+' expr		{printf("+ ");}
	| expr '*' expr		{printf("* ");}
	| '(' expr ')'
	| DIGIT			{printf("%d ",$1);}
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
	if(isdigit(c))
	{
		yylval = c - '0';
		return DIGIT;
	}
	return c;
}

main(){
	yyparse();
	return 1;
}
