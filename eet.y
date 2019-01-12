%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
%}

%token DIM ARGEX FUNC_S FUNC_E RULE REW LIST REF ALPH NUM REF_S REF_E SET SP LABEL END ERR
%left ARGEX
%right FUNC_S
%left FUNC_E
%left LIST

%%
line_list
	: line
	| line_list line

line
	: dimension_expression END 	{printf(":END:\n");}

dimension_expression
	: list					{printf(":Dataset:");}
	| list RULE list			{printf(":In->Out:");}

list
	: arg
	| FUNC_S FUNC_E
	| list LIST list
	| list FUNC_S list FUNC_E
	| list list

arg
	: ARGEX
	| ARGEX DIM

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
    printf("::T:CLEAR::\n");
}
