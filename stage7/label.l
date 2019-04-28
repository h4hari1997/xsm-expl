%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>

	int pass,lineno,address;
	char *label;
	FILE *target_file;

	struct labelTable
	{
		char *label;
		int address;
		struct labelTable *next;
	}*head,*tail;

	void addLabel(char *a,int b);
	int getAddress(char *a);


%}

%%

[a-zA-Z][a-zA-Z0-9]+[:][\n]	{
				if(pass==1)
				{
					label = (char*)malloc(sizeof(char)*(yyleng-2));
					yyless(yyleng-2);
					label=strdup(yytext);
					addLabel(label,lineno);
					lineno -=2;
				}

			}

"JMP "[a-zA-Z][a-zA-Z0-9]+	{
					if(pass==2)
						fprintf(target_file,"JMP %d",getAddress(yytext+4));
				}

"JZ R"[0-9]+[,][ ][a-zA-Z][a-zA-Z0-9]+ {
					if(pass==2)
					{
						if(isdigit(yytext[5]))
							fprintf(target_file, "JZ R%c%c, %d", yytext[4], yytext[5], getAddress(yytext+8));
						else
							fprintf(target_file, "JZ R%c, %d", yytext[4],getAddress(yytext+7));

					}
					}

"JNZ R"[0-9]+[,][ ][a-zA-Z][a-zA-Z0-9]+ {
					if(pass==2)
					{
						if(isdigit(yytext[6]))
							fprintf(target_file, "JNZ R%c%c, %d", yytext[5], yytext[6], getAddress(yytext+9));
						else
							fprintf(target_file, "JNZ R%c, %d", yytext[5], getAddress(yytext+8));
					}
					}

"CALL 0" 			{
					if(pass==2)
						fprintf(target_file, "CALL 0");
				}

"CALL MAIN" {
				if(pass==2)
					fprintf(target_file, "CALL %d", getAddress(yytext+5));
			    }

"CALL F"[0-9]+ {
				if(pass==2)
					fprintf(target_file, "CALL %d", getAddress(yytext+5));
			    }

"MOV R0, F"[0-9]+ {
				if(pass==2)
					fprintf(target_file, "MOV R0, %d", getAddress(yytext+8));
			    }


"\n"		{
			if(pass==2)
			{
				fprintf(target_file, "\n");
			}
			else
			{
				if(lineno<2056)
					lineno++;
				else
					lineno+=2;
			}
		}


.		{
			if(pass==2)
				fprintf(target_file, "%s", yytext);
		}


%%

int yywrap(void)
{
	if(pass==1)
	{
		yyin=fopen("ex1.xsm","r");
		pass=2;
		return 0;
	}
	else
	{
		return 1;
	}
}

void addLabel(char *label,int address)
{
	struct labelTable *l = (struct labelTable*)malloc(sizeof(struct labelTable));
	l->label=label;
	l->address=address;
	l->next=NULL;

	if(head==NULL)
		head=tail=l;
	else
	{
		tail->next=l;
		tail=l;
	}
}

int getAddress(char *label)
{
	struct labelTable *l = malloc(sizeof(struct labelTable));

	l=head;

	while(l!=NULL)
	{
		if(strcmp(l->label,label)==0)
			return l->address;
		l=l->next;
	}

	return -1;
}


int main()
{
	head = NULL;
	tail = NULL;
	pass = 1;
	lineno = 2048;
	target_file = fopen("code.xsm","w");
	yyin = fopen("ex1.xsm","r");
	yylex();
	fclose(target_file);
	fclose(yyin);
	return 1;
}
