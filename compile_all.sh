#!/bin/bash
##tf
echo tf
lex tf.l
yacc -dv tf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out tf
mv y.output tf.output

##etf
echo etf
lex etf.l
yacc -dv etf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out etf
mv y.output etf.output

##mlf
echo mlf_
lex mlf.l
yacc -dv mlf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out mlf_
mv y.output mlf.output

##mlf_L
echo mlf_L
lex mlf_L.l
yacc -dv mlf_L.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out mlf_L
mv y.output mlf_L.output


##llf
echo llf_
lex llf.l
yacc -dv llf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf_
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

##s
echo s_ref
lex s_ref.l
yacc -dv s_ref.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out s_ref
mv y.output s_ref.output

