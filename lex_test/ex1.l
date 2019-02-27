%{
	#include<stdio.h>

	int l,w,c;
%}

%%

[a-zA-Z0-9]	{c++;}
[\n]		{l++; w++;}
[ |\t]		{w++;}
(.)		{}

%%

int yywrap(){
	return 1;
}

int main(){
	l=w=1;
	c=0;
	yyin = stdin;
	yylex();
	printf("Lines:- %d\nWords:-  %d\nCharacters:- %d\n",l,w,c);
	return 1;
}
