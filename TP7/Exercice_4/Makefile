hanoi : hanoi.o
	gcc -g -o $@ $^ -Wall
	make clean

hanoi.o : hanoi.c
	gcc -c $^ -Wall

clean :
	rm -r *.o