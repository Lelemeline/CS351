#include  <stdio.h>
#include "fractions.h"

int pgcd(int den1, int den2){
    int t;
    while(den2 != 0){
        t = den2;
        den2 = den1 % den2 ;
        den1 = t;
    }
    return den1;
}

void reduireFraction(Fraction f){
    if(f.num == f.den) {f.num = 1; f.den = 1; }
    else {int com = pgcd(f.num,f.den) ;
    f.num /= com ;
    f.den /= com ;}
}

void afficherFraction(Fraction f){
    printf("Le résultat est %i/%i\n",f.num,f.den);
}
void addFraction(Fraction f1, Fraction f2){
    Fraction f3;
    if(f1.den == f2.den) {
        f3.den = f1.den;
        f3.num = f1.num + f2.num;
    }
    else {
        f3.den = f1.den * f2.den ;
        f3.num = f1.num*f2.den + f2.num*f1.den ;
        }
    reduireFraction(f3);
    afficherFraction(f3);
}
void subFraction(Fraction f1, Fraction f2){
    Fraction f3;
    if(f1.den == f2.den) {
        f3.den = f1.den;
        f3.num = f1.num - f2.num;
    }
    else {
        f3.den = f1.den * f2.den ;
        f3.num = f1.num*f2.den - f2.num*f1.den ;
        }
    reduireFraction(f3);
    afficherFraction(f3);
}
void mulFraction(Fraction f1, Fraction f2){
    Fraction f3 ;
    f3.num = f1.num * f2.num ;
    f3.den = f1.den * f2.den ;
    reduireFraction(f3);
    afficherFraction(f3);
}
void divFraction(Fraction f1, Fraction f2){
    Fraction f3 ;
    f3.den= f2.num ;
    f3.num = f2.den ;
    mulFraction(f1,f3) ;
    reduireFraction(f3);
    afficherFraction(f3);
}