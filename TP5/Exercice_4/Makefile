tri : tri_insertion.o
	gcc -o $@ $^ -Wall
	make clean

tri_insertion.o : tri_insertion.c
	gcc -c -Wall $^

clean :
	rm -f *.o
