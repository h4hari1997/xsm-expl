%{
	#include <stdio.h>
	#include <stdlib.h>
	#define YYSTYPE char
	int yylex(void);
	
%}

%token ID PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END		{printf("\n"); exit(1);}
	;
	
expr : expr PLUS expr 		{printf("+");}
	| expr MINUS expr 	{printf("-");}
	| expr MUL expr 	{printf("*");}
	| expr DIV expr 	{printf("/");}
	| '(' expr ')' 		
	| ID 			{printf("%c",$1);}
	;
	
%%
yyerror(char const *s){
	printf("yyerror %s",s);
}
int main(void){
	yyparse();
	return 0;
}
