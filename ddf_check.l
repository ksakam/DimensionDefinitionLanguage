%{
int  yywrap(void) { return 1; }
%}
%%
,			printf("LIST:%s\n",yytext);
\[[0-9]+(,[0-9]+)*\]	printf("DIM:%s\n",yytext);
$[0-9]+			printf("ARG:%s\n",yytext);
\(			printf("FUNC_S:%s\n",yytext);
\)			printf("FUNC_E:%s\n",yytext);
->			printf("RULE:%s\n",yytext);
\n			printf("END:\n");
.			printf("ERR:\n");
%%
void main() { yylex(); }
