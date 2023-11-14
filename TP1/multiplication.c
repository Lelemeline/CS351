#include <stdio.h>
#include <stdbool.h>
/* Procédure 1*/
/*
int chiffre (void){
    printf("Donnez un nombre compris entre 2 et 9\n");
    int a;
    scanf("%i",&a);
    return a;
}

bool verification(int i, int j, int k) {
    if (k==i*j) return true;
    else return false;

}

int multi (int a){
    int b;
    int c = 0;
    while (c != 11){
        printf("%i * %i = ",a,c);
        scanf("%i",&b);
        if (!verification(c,a,b)){ printf ("Erreur ! %i*%i = %i, et pas %i\n",a,c,a*c,b);
        break;}
        c+=1;
    }
    return 0;
}
int main(void){
    int a = chiffre();
    while(a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 && a!=8 && a!=9) {chiffre();}
    multi(a);
}
*/
/*Procédure 2*/
int chiffre (void){
    printf("Donnez un nombre compris entre 2 et 9\n");
    int a;
    scanf("%i",&a);
    return a;
}

bool verification(int i, int j, int k) {
    if (k==i*j) return true;
    else return false;

}

int multi (int a){
    int b;
    int c = 0;
    int d = 0;
    while (c != 11){
        printf("%i * %i = ",a,c);
        scanf("%i",&b);
        if (verification(c,a,b) == false){ d+= 1;}
        c+=1;
    }
    printf("Vous avez fait %i erreur(s)\n",d);
    return 0;
}
int main(void){
    int a = chiffre();
    while(a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 && a!=8 && a!=9) {chiffre();}
    multi(a);
}
