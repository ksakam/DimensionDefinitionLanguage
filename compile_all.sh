#!/bin/bash
##tf
echo tf
lex tf.l
yacc -dv tf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out tf

##etf
echo etf
lex etf.l
yacc -dv etf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out etf

##mlf
echo mlf_
lex mlf.l
yacc -dv mlf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out mlf_

##mlf_L
echo mlf_L
lex mlf_L.l
yacc -dv mlf_L.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out mlf_L


##llf
echo llf_
lex llf.l
yacc -dv llf.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf_

##llf_meta
echo mlf_meta
lex llf_meta.l
yacc -dv llf_meta.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf_meta

##llf_dict
echo llf_dict
lex llf_dict.l
yacc -dv llf_dict.y
gcc44 y.tab.c lex.yy.c -lfl -ll
mv a.out llf_dict

