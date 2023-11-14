#include <stdio.h>
#include "recursivite.h"

int fibonnaci(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonnaci(n-1) + fibonnaci(n-2);
}


int euclide(int a, int b){
    if(b==0) return a ;
    else return euclide(b,a%b);
}

// palindrome retourne 1 si palindrome 0 sinon
int palindrome(char chaine[], int n){
    if(n<=1) return 1 ;
    if(chaine[0]== chaine[n-1]) return palindrome(chaine+1, n-2);
    else return 0;
}