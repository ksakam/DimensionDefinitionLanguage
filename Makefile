#makefile

##lex check
ddf_check_lex: ddf_check.l.c
	gcc -o ddf_check_lex  ddf_check.l.c

ddf_check.l.c: ddf_check.l
	flex -o ddf_check.l.c ddf_check.l


##syntax check
ddf_check_syn: y.tab.c lex.yy.c
	gcc -o ddf_check_syn y.tab.c lex.yy.c -lfl -ll
y.tab.c: ddf.y
	yac -dv ddf.y
lex.yy.c: ddf.l
	lex ddf.l
