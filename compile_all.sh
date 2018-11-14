#!/bin/bash
# checker
##t
echo t
lex t.l
yacc -dv t.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out t
mv y.output t.output

##etf
echo et
lex t.l
yacc -dv et.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out et
mv y.output et.output

##eet
echo eet
lex t.l
yacc -dv eet.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out eet
mv y.output eet.output

##eetR
echo eetR
lex t.l
yacc -dv eetR.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out eetR
mv y.output eetR.output

##eetRL
echo eetRL
lex t.l
yacc -dv eetRL.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out eetRL
mv y.output eetRL.output


##mlf
echo mlf
lex mlf.l
yacc -dv mlf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out mlf
mv y.output mlf.output

##mlf_L
echo mlf_L
lex mlf_L.l
yacc -dv mlf_L.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out mlf_L
mv y.output mlf_L.output


##llf
echo llf
lex llf.l
yacc -dv llf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf
mv y.output llf.output

##llf_meta
echo mlf_meta
lex llf_meta.l
yacc -dv llf_meta.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf_meta
mv y.output llf_meta.output

##llf_dict
echo llf_dict
lex llf_dict.l
yacc -dv llf_dict.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf_dict
mv y.output llf_dict.output

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

##ees
echo ees
lex s.l
yacc -dv ees.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out ees
mv y.output ees.output

##eesR
echo eesR
lex s.l
yacc -dv eesR.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out eesR
mv y.output eesR.output

##eesRL
echo eesRL
lex s.l
yacc -dv eesRL.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out eesRL
mv y.output eesRL.output

# converter
echo s2t
gcc s2t.c -o s2t
echo t2s
gcc t2s.c -o t2s


