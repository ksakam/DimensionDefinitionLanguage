%{
#include "y.tab.h"
%}

%%
$[0-9]+     {  }
","        return(LIST);
\n         return(EOL);
.          { yyerror("Illegal character"); return(EOL); }
%%
