
%{

#include <stdio.h>
#include <stdlib.h>

%}

%token DIGIT
%left '+'
%left '*'

%%

start : expr '\n'		{printf("\nComplete");exit(1);}
	;

expr:  expr '+' expr		{printf("+ ");}
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

main()
{
	yyparse();
	return 1;
}


