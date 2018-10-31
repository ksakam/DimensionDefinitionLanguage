#makefile
##checker 
### mlf
mlf_L: mlf_L.l mlf_L.y
	gcc44 y.tab.c lex.yy.c -lfl -ll
	mv a.out mlf_L 

y.tab.c: mlf_L.y
	yacc -dv mlf_L.y

lex.yy.c: mlf_L.i
	lex mlf_L.l


