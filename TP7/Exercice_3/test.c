#include <stdio.h>
#include "recursivite.h"

int test_fibonnaci(int a, int b){
    if(fibonnaci(a)!=b) return 0 ;
    else return 1;
}
int test_euclide(int a, int b, int c){
    if (euclide(a,b)!=c) return 0;
    else return 1 ;
}
int test_palindrome(char mot[], int taille, int pal){
    if (palindrome(mot,taille)!=pal) return 0;
    else return 1;
}

int main(void){
    printf("1 : test validé\n0 : test pas bon\n");
    printf("On test Fibonnaci en 3 valeurs : 0, 1 et 5\n");
    printf("%i\n%i\n%i\n",test_fibonnaci(0,0),test_fibonnaci(1,1),test_fibonnaci(5,5));
    printf("On teste Euclide en trois valeurs : PGCD de 0 et 0, PGCD de 15 et 0, PGCD de 21 et 15\n");
    printf("%i\n%i\n%i\n",test_euclide(0,0,0),test_euclide(15,0,15),test_euclide(21,15,3));
    printf("On teste Palindrome pour kayak,abba et croche\n");
    printf("%i\n%i\n%i\n",test_palindrome("kayak",5,1),test_palindrome("abba",4,1),test_palindrome("croche",6,0));
    return 0;
}