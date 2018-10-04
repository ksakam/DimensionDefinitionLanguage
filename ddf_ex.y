%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
%}

%token DIM ARG FUNC_S FUNC_E RULE LIST EXEND GRP_S GRP_E END ERR

%%
line_list
	: line
	| line_list line

line
	: dimension_expression_list END {printf("END:\n");}


dimension_expression_list
	: dimension_expression
	| dimension_expression_group_rule
	| dimension_expression_list EXEND dimension_expression

dimension_expression_group_rule
	: dimension_expression_group rule dimension_expression_group

dimension_expression_group
	: GRP_S dimension_expression GRP_E

dimension_expression
	: args
	| func
	| args rule args
	| func rule args
	| args rule func
	| func rule func

rule
	: RULE

func
	: FUNC_S args FUNC_E


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
