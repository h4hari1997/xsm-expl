%{
	#include<stdio.h>
%}

%%

[A][a-zA-Z][a-zA-Z][\n \t]	{printf("%s\n",yytext);}
[\n \t]				{}
(.)				{}
"and"			{printf(" ---------------");}
%%

int yywrap(){
	return 1;
}

int main(){
	yyin = stdin;
	yylex();
	return 1;
}
