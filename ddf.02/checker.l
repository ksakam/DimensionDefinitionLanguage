%{
int  yywrap(void) { return 1; }
%}
%%
$[0-9]+   printf("ARG: %s\n", yytext);
$[0-9]+\(  printf("F_START",yytext);
\)         printf("F_FINISH",yytext);
->        printf("RULE: %s\n",yytext);
\n        printf("END: %s\n", yytext);
%%
void main() { yylex(); }
