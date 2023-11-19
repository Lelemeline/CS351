quicksort : quicksort.o
	gcc -g -o $@ $^ -Wall
	make clean
	clear
	./quicksort

quicksort.o : quicksort.c
	gcc -c $^ -Wall

clean :
	rm -r *.o
