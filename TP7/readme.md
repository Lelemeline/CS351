# TP7 : Récursivité / Utilisation d'un débogueur

## Exercice 1 : Post-fixe avec ddd

- [x] Makefile modifié
Le makefile de l'exercice 5 ressemble alors  à  :
```Makefile
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

```

Quant à "l'exploration" des commandes du débogueur :
```
$ gdb ./programme
(gdb) break x # impose un breakpoint à la ligne indiquée
(gdb) run
(gdb) print x #affiche la variable x
(gdb) display x #comme print mais de façon permanente
(gdb) continue
(gdb) step #run la ligne suivante. s'écrit également "s".
(gdb) stepi #indique l'adresse en plus
(gdb) next #comme step mais ne rentre pas dans les fonctions
(gdb) nexti
(gdb) finish #pour finir à la fin.
```

## Exercice 2 : Pointeurs et ddd

Débogage fait. Le début ressemble  à  :
```Bash
Starting program: ~/TP6/mainPointeur

Breakpoint 1, main (argc=21845, argv=0x7fffffffdf56) at mainPointeur.c:4
4	int main(int argc, char * argv[]) {
1: a = 21845
2: b = 0
3: c = 0
4: &a = (int *) 0x7fffffffdf4c
5: &b = (int *) 0x7fffffffdf50
6: &c = (int *) 0x7fffffffdf54
7: p1 = (int *) 0x555555555060 <_start>
8: p2 = (int *) 0x7fffffffe060
9: *p1 = -98693133
10: *p2 = 1
(gdb) n
10		a = 1;
1: a = 21845
2: b = 0
3: c = 0
4: &a = (int *) 0x7fffffffdf4c
5: &b = (int *) 0x7fffffffdf50
6: &c = (int *) 0x7fffffffdf54
7: p1 = (int *) 0x555555555060 <_start>
8: p2 = (int *) 0x7fffffffe060
9: *p1 = -98693133
10: *p2 = 1
(gdb) n
11		b = 2;
1: a = 1
2: b = 0
3: c = 0
4: &a = (int *) 0x7fffffffdf4c
5: &b = (int *) 0x7fffffffdf50
6: &c = (int *) 0x7fffffffdf54
7: p1 = (int *) 0x555555555060 <_start>
8: p2 = (int *) 0x7fffffffe060
9: *p1 = -98693133
10: *p2 = 1
(gdb) n
12		c = 3;
1: a = 1
2: b = 2
3: c = 0
4: &a = (int *) 0x7fffffffdf4c
5: &b = (int *) 0x7fffffffdf50
6: &c = (int *) 0x7fffffffdf54
7: p1 = (int *) 0x555555555060 <_start>
8: p2 = (int *) 0x7fffffffe060
9: *p1 = -98693133
10: *p2 = 1

```

## Exercice 3 : Divers

- [x] Makefile
- [x] fonctions
- [x] fichier test

## Exercice 4 : Tour de Hanoï

- [x] Makefile
- [x] fonction
- [x] test dans le main
Pour le test, on considère que si on obtient le nombre de déplacements correct (à savoir 2^n -1 déplacements où n est le nombre de disques), la fonction est correcte.

## Exercice 5 : Quick sort

- [x] Makefile
- [x] fonctions
- [x] test
Le test est un tableau dans le main
