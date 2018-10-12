%{
#include <stdio.h>
#include <math.h>
void yyerror(char *s) { printf("%s\n",s); }
int  yywrap(void) { return 1; }
%}

%union {
  char *digits;
}

%token NUMBER
%token EOL
%type  <val> exp NUMBER

%%
input   :
        | input line
        ;

line    : EOL
        | exp EOL { printf("%g\n",$1);}

exp     : NUMBER                 { $$ = 0;        }
        | args                    { $$ = 1;   }
        | args "->" args          { $$ = 2;   } 
        | func "->" args          { $$ = 3;   } 

func    : fname "(" args ")"

fname   : "$" digits


        ;

%%

int main() {
  yyparse();
}
