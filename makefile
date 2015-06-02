FILE = TP2

$(FILE): lex.yy.o y.tab.o
	gcc -o $(FILE) lex.yy.o y.tab.o
	
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

lex.yy.c: y.tab.h tp2.l
	flex tp2.l

y.tab.o: y.tab.c y.tab.h 
	gcc -c y.tab.c arvore.c

y.tab.c y.tab.h : tp2.y
	yacc -d tp2.y

clean:
	rm -f *.o y.tab.c y.tab.h