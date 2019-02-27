%{

#include<stdio.h>
#include<stdlib.h>

void print_operator(char op);

int pos=0;

%}

%token DIGIT
%left '+'
%left '*'
%%


start : expr '\n'		{exit(1);}
      ;

expr: expr '+' expr     {print_operator('+');}
    | expr '*' expr     {print_operator('*');}
    | '(' expr ')'
    | DIGIT             {printf("NUM%d ",pos);}
    ;

%%


void print_operator(char c){
    switch(c){
        case '+'  : printf("PLUS ");
                    break;
        case '*'  : printf("MUL ");
                    break;
    }
    return;
}

yyerror(char const *s)
{
    printf("yyerror %s",s);
}

yylex(){
    char c;
    c = getchar();
    if(isdigit(c)){
        pos++;
        return DIGIT;
    }
    else if(c == ' '){
        yylex();       
    }
    else {
        return c;
    }
}

main()
{
	yyparse();
	return 1;
}
