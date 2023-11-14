recursivite : recursivite.o test.o
	gcc -o $@ $^ -Wall
	make clean

test.o  : test.c recursivite.c
	gcc -c -Wall $^
recursivite.o : recursivite.c
	gcc -c -Wall $^

clean :
	rm -f *.o
