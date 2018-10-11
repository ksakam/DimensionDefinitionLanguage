%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
%}

%token DIM ARG FUNC_S FUNC_E RULE LIST END ERR

%%
line_list
	: line
	| line_list line

line
	: dimension_expression END 	{printf("END:\n");}

dimension_expression
	: arg				{printf(":Dataset:");}
	| list				{printf(":Dataset:");}
	| arg RULE arg			{printf(":In->Out:");}
	| arg RULE list			{printf(":In->Out:");}
	| list RULE arg			{printf(":In->Out:");}
	| list RULE list		{printf(":In->Out:");}

list
	: arg FUNC_S funcbody FUNC_E



funcbody
	: args
	| funcs

funcs
	: func
	| funcs LIST func

func
	: arg FUNC_S args FUNC_E
	| arg FUNC_S FUNC_E
	| arg FUNC_S func FUNC_E

args
	: arg
	| args LIST arg


arg
	: ARG
	| ARG DIM

%%
int yyerror(char const *str)
{
    extern char *yytext;
    fprintf(stderr, "ERR:%s:\n", yytext);
    return 0;
}

int main(void)
{
    extern int yyparse(void);
    extern FILE *yyin;

    yyin = stdin;
    if (yyparse()) {
        exit(1);
    }
    printf(":::CLEAR:::\n");
}
