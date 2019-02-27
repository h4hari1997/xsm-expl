%{
  #include <stdio.h>
  int yyerror();
%}

%token DIGIT

%left '+'
%left '*'

%%

start : expr '\n'  { printf("Expression value = %d",$1);}
	;

expr:  expr '+' expr		{$$ = $1+$3;}
	|expr '*' expr		{$$ = $1*$3;}
	| '(' expr ')'	 	{$$ = $2;}
	| DIGIT			{$$ = $1;}
	;

%%

int yyerror()
{
	printf("Error");
}

int main()
{
  yyparse();
  return 1;
}

