%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
%}

%token DIGIT CHAR
%left '+'
%left '*'

%%

start : stmt '\n'		{printf("Valid identifier\n");exit(1);}
	;

stmt : CHAR id
	;

id : CHAR id | DIGIT id | CHAR | DIGIT
	;

%%

yyerror()
{
	printf("Invalid identifier\n");
}

yylex()
{
	int c;
	c = getchar();
	if(isalpha(c))
	{
		return CHAR;
	}
	else if(isdigit(c))
	{
		return DIGIT;
	}
	return c;
}

main()
{
	yyparse();
	return 1;
}
