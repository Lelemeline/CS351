main : main.o fractions.o
	gcc -o $@ $^ -Wall
	make clean
main.o : main.c
	gcc -c -Wall $^
fractions.o : fractions.c fractions.h
	gcc -c -Wall $^
clean :
	rm -f *.o
	rm -f *.h.gch