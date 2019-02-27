%{
	#include<stdio.h>

	int i,f;
%}

%%

[0-9]+			{i++;}
([0-9]+)[.]([0-9]+)	{f++;}
[\n \t]			{}

%%

int yywrap(){
	return 1;
}

int main(){
	i=f=0;
	yyin = stdin;
	yylex();
	printf("Integers:- %d\nFloating Point Numbers:-  %d\n",i,f);
	return 1;
}
