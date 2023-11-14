#include <stdio.h>

// partitionner(tableau T, entier premier, entier dernier, entier pivot)
//     échanger T[pivot] et T[dernier]  // échange le pivot avec le dernier du tableau , le pivot devient le dernier du tableau
//     j := premier
//     pour i de premier à dernier - 1 // la boucle se termine quand i = (dernier élément du tableau).
//         si T[i] <= T[dernier] alors
//             échanger T[i] et T[j]
//             j := j + 1
//     échanger T[dernier] et T[j]
//     renvoyer j

// tri_rapide(tableau T, entier premier, entier dernier)
//         si premier < dernier alors
//             pivot := choix_pivot(T, premier, dernier)
//             pivot := partitionner(T, premier, dernier, pivot)
//             tri_rapide(T, premier, pivot-1)
//             tri_rapide(T, pivot+1, dernier)


void quicksort(int *tab,int d,int f){
    int pivot = *(tab+f);

}