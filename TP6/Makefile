# Exercice 1
pointeur : mainPointeur.o
	gcc -g -o $@ $^ -Wall
	make clean

pointeur.o : mainPointeur.c
	gcc -g -c $^

#Exercice 2

passage: exercice2.o
	gcc -g -o $@ $^ -Wall
	make clean
exercice2.o : exercice2.c
	gcc -g -c $^

#Exercice 3
hollandais : hollandais.o
	gcc -o $@ $^ -Wall
	make clean

hollandais.o : hollandais.c
	gcc -c -Wall $^

clean :
	rm -f *.o