#include <stdio.h>
#include "fractions.h"

int main(int argc, char* argv[]){
    Fraction fa, fb ;
    char operation;
    char buf;
    printf("Entrer deux fractions :\n") ;
    scanf("%d/%d %d/%d", &fa.num, &fa.den, &fb.num, &fb.den) ;
    scanf("%c",&buf);
    printf("Entrer une opération (+, -, /, *) : \n");
    scanf("%c", &operation);
    if (operation == '*') mulFraction(fa,fb) ;
    else if(operation == '+') addFraction(fa,fb) ;
    else if(operation == '-') subFraction(fa,fb)  ;
    else if(operation == '/') divFraction(fa,fb) ;
    else return 1;
}
