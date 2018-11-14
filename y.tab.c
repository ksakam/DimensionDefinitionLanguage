#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "eesRL.y"
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
/* lexfile: llf.l*/
#line 30 "y.tab.c"
#define DIM 257
#define ARGEX 258
#define ALPH 259
#define NUM 260
#define FUNC_S 261
#define FUNC_E 262
#define RULE 263
#define LIST 264
#define REF 265
#define REF_S 266
#define REF_E 267
#define SET 268
#define LABEL 269
#define SP 270
#define END 271
#define ERR 272
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    1,    1,    3,    4,    4,    5,    5,    5,
    5,    5,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    9,   10,   10,    8,    8,   11,
   11,   11,   11,    6,    6,    7,    7,    7,
};
short yylen[] = {                                         2,
    1,    2,    2,    2,    3,    1,    3,    7,    7,    7,
    7,    7,    1,    1,    3,    3,    3,    3,    2,    2,
    4,    4,    4,    4,    3,    1,    2,    3,    2,    1,
    3,    3,    2,    1,    2,    1,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    1,    0,    0,    0,    0,    0,
   35,    0,   30,    0,    0,    2,    0,    3,    4,    0,
    0,    0,    0,    0,    0,   28,    0,    0,   26,    0,
    0,    6,    0,   15,    0,   17,    0,    0,    0,   31,
    0,   27,    0,    0,   21,    0,   23,    0,    7,    0,
    0,    0,    0,    0,    0,    0,   37,   36,    0,    0,
    0,    0,    0,   10,    8,    0,   12,   11,    9,
};
short yydgoto[] = {                                       4,
    5,    6,    7,   31,   32,   13,   66,   22,   10,   30,
   28,
};
short yysindex[] = {                                   -252,
 -253, -173, -177, -252,    0, -263, -238, -218, -249, -171,
    0, -173,    0, -227, -216,    0, -191,    0,    0, -171,
 -171, -170, -161, -164, -200,    0, -173, -198,    0, -167,
 -160,    0, -163,    0, -170,    0, -170, -171, -171,    0,
 -191,    0, -191, -158,    0, -170,    0, -170,    0, -243,
 -162, -157, -156, -165, -153, -165,    0,    0, -154, -240,
 -152, -151, -231,    0,    0, -159,    0,    0,    0,
};
short yyrindex[] = {                                      0,
 -215,    0,    0,    0,    0,    0,    0, -206, -197,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -233, -196, -195,    0,    0,    0, -148,    0, -169,
 -150,    0,    0,    0, -194,    0, -193,    0,    0,    0,
 -180,    0,    0,    0,    0, -192,    0, -185,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -149,    0,    0,    0,
};
short yygindex[] = {                                      0,
  105,    0,    0,    0,   67,    1,   42,    3,    0,    0,
   -2,
};
#define YYTABLESIZE 121
short yytable[] = {                                      14,
    8,   17,    9,   11,    8,    1,    9,   18,    2,   25,
   23,    2,   24,   21,    1,   51,    3,   33,   57,   58,
   34,   36,   35,   37,   41,   52,   65,   57,   58,   29,
    1,   29,   19,   12,   26,   69,   27,   29,   45,   47,
   46,   48,   34,   33,   20,   34,   34,   34,   34,   34,
   53,   34,   34,   29,   59,   34,   62,    1,   13,    1,
   12,   40,   12,   27,   13,   27,    1,   14,   19,   20,
   16,   18,   22,   14,   19,   20,   16,   18,   22,   24,
   32,   32,   15,   32,    1,   24,    1,   12,   25,    2,
    2,   25,    1,   57,   58,   60,    2,   63,   39,   57,
   58,   38,   42,   43,   44,   54,   61,   50,   16,   49,
   55,   56,   64,   33,   67,   68,    0,   38,    0,    0,
    5,
};
short yycheck[] = {                                       2,
    0,  265,    0,  257,    4,  258,    4,  271,  261,   12,
   10,  261,   10,  263,  258,  259,  269,   17,  259,  260,
   20,   21,   20,   21,   27,  269,  267,  259,  260,  263,
  258,  265,  271,  261,  262,  267,  264,  271,   38,   39,
   38,   39,  258,   43,  263,  261,  262,  263,  264,  265,
   50,  267,  268,  270,   54,  271,   56,  258,  265,  258,
  261,  262,  261,  264,  271,  264,  258,  265,  265,  265,
  265,  265,  265,  271,  271,  271,  271,  271,  271,  265,
  261,  262,  260,  264,  258,  271,  258,  261,  258,  261,
  261,  261,  258,  259,  260,   54,  261,   56,  263,  259,
  260,  263,  270,  264,  268,  268,  260,  266,    4,   43,
  268,  268,  267,  262,  267,  267,   -1,  267,   -1,   -1,
  271,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 272
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"DIM","ARGEX","ALPH","NUM",
"FUNC_S","FUNC_E","RULE","LIST","REF","REF_S","REF_E","SET","LABEL","SP","END",
"ERR",
};
char *yyrule[] = {
"$accept : line_list",
"line_list : line",
"line_list : line_list line",
"line : dimension_expression END",
"line : dimension_expression_ref END",
"dimension_expression_ref : dimension_expression REF refs",
"refs : ref",
"refs : refs LIST ref",
"ref : arg SET REF_S ALPH SET numalph REF_E",
"ref : arg SET REF_S arg SET numalph REF_E",
"ref : arg SET REF_S ALPH SET arg REF_E",
"ref : arg SET REF_S arg SET arg REF_E",
"ref : arg SET REF_S LABEL SET NUM REF_E",
"dimension_expression : arg",
"dimension_expression : list",
"dimension_expression : arg RULE arg",
"dimension_expression : arg RULE list",
"dimension_expression : list RULE arg",
"dimension_expression : list RULE list",
"dimension_expression : label arg",
"dimension_expression : label list",
"dimension_expression : label arg RULE arg",
"dimension_expression : label arg RULE list",
"dimension_expression : label list RULE arg",
"dimension_expression : label list RULE list",
"label : LABEL NUM sps",
"sps : SP",
"sps : sps SP",
"list : FUNC_S func FUNC_E",
"list : list list",
"func : arg",
"func : FUNC_S func FUNC_E",
"func : func LIST func",
"func : func func",
"arg : ARGEX",
"arg : ARGEX DIM",
"numalph : NUM",
"numalph : ALPH",
"numalph : numalph numalph",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 79 "eesRL.y"
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
#line 240 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 3:
#line 21 "eesRL.y"
{printf(":END:\n");}
break;
case 4:
#line 22 "eesRL.y"
{printf(":END:\n");}
break;
case 5:
#line 25 "eesRL.y"
{printf(":Ref:");}
break;
case 12:
#line 36 "eesRL.y"
{printf(":RefL:");}
break;
case 13:
#line 39 "eesRL.y"
{printf(":Dataset:");}
break;
case 14:
#line 40 "eesRL.y"
{printf(":Dataset:");}
break;
case 15:
#line 41 "eesRL.y"
{printf(":In->Out:");}
break;
case 16:
#line 42 "eesRL.y"
{printf(":In->Out:");}
break;
case 17:
#line 43 "eesRL.y"
{printf(":In->Out:");}
break;
case 18:
#line 44 "eesRL.y"
{printf(":In->Out:");}
break;
case 19:
#line 45 "eesRL.y"
{printf(":Dataset:");}
break;
case 20:
#line 46 "eesRL.y"
{printf(":Dataset:");}
break;
case 21:
#line 47 "eesRL.y"
{printf(":In->Out:");}
break;
case 22:
#line 48 "eesRL.y"
{printf(":In->Out:");}
break;
case 23:
#line 49 "eesRL.y"
{printf(":In->Out:");}
break;
case 24:
#line 50 "eesRL.y"
{printf(":In->Out:");}
break;
case 25:
#line 53 "eesRL.y"
{printf(":#:");}
break;
#line 489 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
