%{
	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	#include "ex1.h"
	char *varname;
	int number;
	char *str;

%}

%%

"begin"				{return START;}

"end"					{return END;}

"class"				{return CLASS;}

"endclass"		{return ENDCLASS;}

"extends"			{return EXTENDS;}

"self"				{return SELF;}

"new"					{return NEW;}

"delete"			{return DELETE;}

"type"				{return TYPE;}

"endtype"			{return ENDTYPE;}

"initialize"	{return INITIALIZE;}

"alloc"				{return ALLOC;}

"free"				{return FREE;}

"null"				{return NIL;}

"main"				{return MAIN;}

"return"			{return RETURN;}

"breakpoint" 	{return BRKP;}

"read"				{return READ;}

"write"				{return WRITE;}

"if"					{return IF;}

"then"				{return THEN;}

"else"				{return ELSE;}

"endif"				{return ENDIF;}

"while"				{return WHILE;}

"do"					{return DO;}

"endwhile"		{return ENDWHILE;}

"break"				{return BREAK;}

"continue"		{return CONTINUE;}

"repeat"			{return REPEAT;}

"until"				{return UNTIL;}

"decl"				{return DECL;}

"enddecl"			{return ENDDECL;}

"int"					{return INT;}

"str"					{return STR;}


[a-zA-Z][a-zA-Z0-9]*		{
			varname = strdup(yytext);
			yylval.no = createTree(0,TLookup("Integer"),varname,_ID_,NULL,NULL,NULL);
			return ID;
		}


[0-9]+ 		{
			number = atoi(yytext);
			yylval.no = createTree(number,TLookup("Integer"),"\0",_NUM_,NULL,NULL,NULL);
			return NUM;
		}

["][ a-zA-Z0-9]+["]	{
				str=strdup(yytext+1);
				str[yyleng-2]='\0';
				yylval.no = createTree(0,TLookup("String"),str,_STR_,NULL,NULL,NULL);
				return STRING;
			}

"="			{return ASSIGN;}
"+" 		{return PLUS;}
"-" 		{return MINUS;}
"*" 		{return MUL;}
"/" 		{return DIV;}
"%"			{return MOD;}
"<"			{return LT;}
">"			{return GT;}
"<="		{return LE;}
">="		{return GE;}
"!="		{return NE;}
"=="		{return EQ;}
"&&"		{return AND;}
"||"		{return OR;}
"!"			{return NOT;}

[\n \t] 	{}

"["     {return *yytext;}

"]"		{return *yytext;}

[(){}] 	{return *yytext;}

[&.,\":;]	{return *yytext;}

.		{yyerror("unknown character\n");}

%%

int yywrap(void)
{
	return 1;
}
