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
#line 2 "c.y"
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int yylex(void);
extern char *yytext;
#line 29 "y.tab.c"
#define ARGEX 257
#define ALPH 258
#define NUM 259
#define DIM 260
#define LIST 261
#define FUNC_S 262
#define FUNC_E 263
#define RULE 264
#define REW 265
#define REF 266
#define REF_S 267
#define REF_E 268
#define SET 269
#define SP 270
#define LABEL 271
#define END 272
#define ERR 273
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    4,    5,    5,
    5,    5,    5,    3,    3,
};
short yylen[] = {                                         2,
    1,    2,    2,    1,    1,    3,    3,    3,    3,    5,
    5,    5,    5,    5,    5,    5,    5,    1,    1,    3,
    2,    3,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    1,    0,    0,    0,    0,   25,   21,
   19,    0,    2,    3,    0,    0,    0,    0,   20,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   11,
    0,   13,    0,   15,    0,   17,
};
short yydgoto[] = {                                       3,
    4,    5,   11,    7,    8,
};
short yysindex[] = {                                   -178,
 -260, -159, -178,    0, -269, -249, -245, -255,    0,    0,
    0, -161,    0,    0, -178, -178, -178, -255,    0, -244,
 -243, -240, -230, -219, -178, -178, -178, -178,    0,    0,
    0,    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
 -252,    0,    0,    0,    0, -217, -222, -173,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -231,    0, -214,
 -221, -208, -213, -226,    0,    0,    0,    0, -205,    0,
 -196,    0, -189,    0, -187,    0,
};
short yygindex[] = {                                      0,
   57,    0,    1,   62,    6,
};
#define YYTABLESIZE 104
short yytable[] = {                                       9,
    6,    1,   14,    6,   24,   17,    2,   12,   24,   24,
   24,   24,   24,   18,   15,   20,   22,   18,   16,   24,
   25,   26,   24,   18,   27,   29,   31,   33,   35,   18,
   22,   23,   23,   23,   28,   22,   22,   22,   22,   19,
   23,   17,   19,   19,   19,   22,   19,   19,   19,    5,
    7,   19,   19,   19,    4,   19,   19,    6,    9,   13,
   19,    0,    0,    8,   19,   19,   10,   19,    0,   19,
    0,   19,   19,   19,   19,   12,   21,   23,    1,    0,
    0,    0,   14,    2,   16,    0,   30,   32,   34,   36,
   18,   18,    0,    0,    0,    1,    0,    1,   18,   17,
    2,   19,    2,   10,
};
short yycheck[] = {                                     260,
    0,  257,  272,    3,  257,  261,  262,    2,  261,  262,
  263,  264,  265,    8,  264,   15,   16,   12,  264,  272,
  265,  265,   17,   18,  265,   25,   26,   27,   28,   24,
  257,  263,  264,  265,  265,  262,  263,  264,  265,  257,
  272,  261,  257,  261,  262,  272,  261,  262,  257,  272,
  272,  257,  261,  262,  272,  261,  262,  272,  272,    3,
  257,   -1,   -1,  272,  261,  262,  272,  257,   -1,  257,
   -1,  261,  262,  261,  262,  272,   15,   16,  257,   -1,
   -1,   -1,  272,  262,  272,   -1,   25,   26,   27,   28,
  264,  265,   -1,   -1,   -1,  257,   -1,  257,  272,  261,
  262,  263,  262,  263,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ARGEX","ALPH","NUM","DIM","LIST",
"FUNC_S","FUNC_E","RULE","REW","REF","REF_S","REF_E","SET","SP","LABEL","END",
"ERR",
};
char *yyrule[] = {
"$accept : line_list",
"line_list : line",
"line_list : line_list line",
"line : dimension_expression END",
"dimension_expression : arg",
"dimension_expression : list",
"dimension_expression : arg RULE arg",
"dimension_expression : arg RULE list",
"dimension_expression : list RULE arg",
"dimension_expression : list RULE list",
"dimension_expression : arg RULE arg REW arg",
"dimension_expression : arg RULE arg REW list",
"dimension_expression : arg RULE list REW arg",
"dimension_expression : arg RULE list REW list",
"dimension_expression : list RULE arg REW arg",
"dimension_expression : list RULE arg REW list",
"dimension_expression : list RULE list REW arg",
"dimension_expression : list RULE list REW list",
"list : chain",
"chain : arg",
"chain : FUNC_S chain FUNC_E",
"chain : FUNC_S FUNC_E",
"chain : chain LIST chain",
"chain : chain chain",
"arg : ARGEX",
"arg : ARGEX DIM",
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
#line 54 "c.y"
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
    printf("::C:CLEAR::\n");
}
#line 210 "y.tab.c"
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
#line 21 "c.y"
{printf(":END:\n");}
break;
case 4:
#line 24 "c.y"
{printf(":Dataset:");}
break;
case 5:
#line 25 "c.y"
{printf(":Dataset:");}
break;
case 6:
#line 26 "c.y"
{printf(":In->Out:");}
break;
case 7:
#line 27 "c.y"
{printf(":In->Out:");}
break;
case 8:
#line 28 "c.y"
{printf(":In->Out:");}
break;
case 9:
#line 29 "c.y"
{printf(":In->Out:");}
break;
case 10:
#line 30 "c.y"
{printf(":In->Out=>REW:");}
break;
case 11:
#line 31 "c.y"
{printf(":In->Out=>REW:");}
break;
case 12:
#line 32 "c.y"
{printf(":In->Out=>REW:");}
break;
case 13:
#line 33 "c.y"
{printf(":In->Out=>REW:");}
break;
case 14:
#line 34 "c.y"
{printf(":In->Out=>REW:");}
break;
case 15:
#line 35 "c.y"
{printf(":In->Out=>REW:");}
break;
case 16:
#line 36 "c.y"
{printf(":In->Out=>REW:");}
break;
case 17:
#line 37 "c.y"
{printf(":In->Out=>REW:");}
break;
#line 451 "y.tab.c"
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
