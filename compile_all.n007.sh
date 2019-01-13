#!/bin/bash
# checker
##t
echo t
lex t.l
yacc -dv t.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out t
mv y.output t.output

##et
echo et
lex t.l
yacc -dv et.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out et
mv y.output et.output



##s
echo s
lex s.l
yacc -dv s.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out s
mv y.output s.output

##es
echo es
lex s.l
yacc -dv es.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out es
mv y.output es.output



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
echo cts
gcc cts.c -o cts

