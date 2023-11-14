# Chapitre 3 : Les Tableaux

_Note_ :
Dans chaque fichier.c se trouve le code demandé dans les exercices.
L'écriture des tests est rédigée et expliquée dans ce fichier et les tests sont faits dans le fichier test.c.
Les réponses aux questions posées se trouvent dans ce fichier.
Le Makefile compile gestion.o, polynome.o, matrices.o, qui correspondent aux trois exercices principaux, et tests.o puis l'éxécutable test.

## Exercice 1

|Etiquette | Valeur |
|:--------:|:------:|
|Note la plus basse | 6.0 |
|Note la plus élevée| 14,7|
|Moyenne des étudiants | 10,94 |
|Variance | 10,43 |
|Ecart-type| 3,2|
|Rang dans le tableau de la valeur 13,5 | 1 |
|Rang dans le tableau de la valeur 10,5 | -1 |

test 1 : il consiste en le tableau vide. `{}`
test 2 : il y a plusieurs fois la même note dans le tableau `{4.0,3.5,12.8,4.0,17.5}` . La valeur de l'index retournée par la fonction de recherche d'un élément devrait être 0.
test 3 : toutes les notes sont égales `{5.0,5.0,5.0,5.0,5.0}`
On y cherche un élément présent dans le tableau, 5.0, (la valeur retournée sera 0), ainsi qu'un élément non présent, 8.0, et la valeur retournée sera -1.0.



## Exercice 3


 Compilé avec la commande :

  `gcc -o exercice3 -Wall exercice3.c`

 retour :

  ` Nombre d'arguments : 1`

| Variable | Contenu|
|----------|-------|
|   argc   |  1   |
|  argv[0] |./exercice3|
|  argv[1] | None  |
|  argv[2] | None  |
|  argv[3] | None  |

## Exercice 4

Le programme donne :

`La taille du tableau tab est 20
 :La taille du tableau T est-elle 8 ou bien 5?`

Un int a besoin de 4 octets en mémoire, et le tableau contient 5 int.
La fonction sizeof() ne donne pas le nombre d'éléments du tableau mais bien la quantité d'octets nécessaires en mémoire pour stocker ce tableau.

## Exercice 5

2.
#### Addition de deux matrices

Résultat attendu :

| 3  -3  5 |

| 4  10  -3|

Prérequis pour une addition de matrices : les matrices sont de la même forme.
La taille de la matrice résultat est identique à celle des termes de la somme.

#### Matrice transposée

<sup> t</sup> A = |1  -1|
       |0   2|
       |4  -5|

La taille de la matrice est : ligne * colonne.
La taille de sa transposée est : colonne * ligne.

#### Produit matriciel

Résultat attendu :

| 12  17 |
|-11  -24|

Pour multiplier deux matrices A et B de tailles respectives l*m et n*o, il faut que m=n.
La taille de la matrice résultante C sera l*o.
