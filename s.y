%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
// lexfile: llf.l
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
	: argF
	| argI
	| FUNC_S argL FUNC_E



argL
	: argI LIST argI
	| argL LIST argI

argI
	: FUNC_S argEL FUNC_E

argEL
	: argE LIST argE
	| argEL LIST argE


argE
	: arg
	| argF

argF
	: FUNC_S args FUNC_E

args
	: arg LIST arg
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
