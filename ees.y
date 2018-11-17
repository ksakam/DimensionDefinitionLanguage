%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
// lexfile: llf.l
%}

%token DIM ARGEX ALPH NUM FUNC_S FUNC_E RULE LIST REF REF_S REF_E SET LABEL SP END ERR
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
	: arg				{printf(":Dataset:");}
	| list				{printf(":Dataset:");}
	| arg RULE arg			{printf(":In->Out:");}
	| arg RULE list			{printf(":In->Out:");}
	| list RULE arg			{printf(":In->Out:");}
	| list RULE list		{printf(":In->Out:");}

list
	: FUNC_S func FUNC_E
	| list list

func
	: arg
	| LIST
	| FUNC_S func FUNC_E
	| func LIST func
	| func func

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
    printf("::CLEAR::\n");
}
