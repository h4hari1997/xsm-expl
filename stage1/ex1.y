%{
	#include <stdio.h>
	#include <stdlib.h>
	
	#include "ex1.h"
	#include "ex1.c"
	
	int yylex(void);
	
%}
	
%union
{
	struct tnode* no;
}

%type <no> expr program NUM PLUS MINUS MUL DIV END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV
	
%%
	
program : expr END {
			$$ = $2;
			printf("Answer : \n");
			print($1);
			exit(1);
		   }
	;
	
	expr : expr PLUS expr {$$ = makeOperatorNode('+',$1,$3);}
	| expr MINUS expr {$$ = makeOperatorNode('-',$1,$3);}
	| expr MUL expr {$$ = makeOperatorNode('*',$1,$3);}
	| expr DIV expr {$$ = makeOperatorNode('/',$1,$3);}
	| '(' expr ')' {$$ = $2;}
	| NUM {$$ = $1;}
	;
	
%%
	
yyerror(char const *s)
{
	printf("yyerror %s",s);
}
	
	
int main(void)
{
	yyparse();
	return 0;
}
