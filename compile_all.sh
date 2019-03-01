#!/bin/bash
# checker
##t
echo t
lex t.l
yacc -dv t.y
gcc y.tab.c lex.yy.c
mv a.out t
mv y.output t.output

##etf
echo et
lex t.l
yacc -dv et.y
gcc y.tab.c lex.yy.c
mv a.out et
mv y.output et.output

##eet
echo eet
lex t.l
yacc -dv eet.y
gcc y.tab.c lex.yy.c
mv a.out eet
mv y.output eet.output

##s
echo s
lex s.l
yacc -dv s.y
gcc y.tab.c lex.yy.c
mv a.out s
mv y.output s.output

##es
echo es
lex s.l
yacc -dv es.y
gcc y.tab.c lex.yy.c
mv a.out es
mv y.output es.output

##ees
echo ees
lex s.l
yacc -dv ees.y
gcc y.tab.c lex.yy.c
mv a.out ees
mv y.output ees.output

# converter
##S2T
echo s2t
gcc s2t.c -o s2t
echo s2tR
gcc s2tR.c -o s2tR
echo cst
gcc cst.c -o cst
echo cstR
gcc cstR.c -o cstR
##T2S
echo t2s
gcc t2s.c -o t2s
echo t2sR
gcc t2sR.c -o t2sR

