calcul : postfixe.o pile.o
	gcc -g -o $@ $^ -Wall
	make clean

postfixe.o : postfixe.c
	gcc -c -Wall $^
pile.o : pile.c pile.h
	gcc -g -c -Wall $^

clean :
	rm -f *.o
	rm -f *.h.gch
