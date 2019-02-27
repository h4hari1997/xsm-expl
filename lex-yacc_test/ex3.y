%{
	#include <stdio.h>
	#include <stdlib.h>
	#define YYSTYPE char*
	int yylex();
	
%}

%token ID PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV


%%

program : expr END		{printf("\n"); exit(1);}
	;
	
expr : exprpl PLUS expr 		{}
	| exprmi MINUS expr 	{}
	| exprmu MUL expr 	{}
	| exprdi DIV expr 	{}
	| '(' expr ')' 		
	| ID 			{printf("%s ",$1);}
	;
exprpl : ID {printf("+ %s ",$1);};
exprmi : ID {printf("- %s ",$1);};
exprmu : ID {printf("* %s ",$1);};
exprdi : ID {printf("/ %s ",$1);};
	
%%

yyerror(char const *s)
{
	printf("yyerror %s",s);
}

int main(void){
	yyparse();
	return 0;
}
