%{
	#include<stdio.h>
%}

%%

[/][/][^\n]*			{printf("%s\n",yytext);}
[/][*][a-zA-Z0-9 \n\t]*[*][/]		{printf("%s\n",yytext);}
[\n \t]					{}
(.)					{}

%%

int yywrap(){
	return 1;
}

int main(){
	yyin = fopen("input.l","r");
	yylex();
	return 1;
}
