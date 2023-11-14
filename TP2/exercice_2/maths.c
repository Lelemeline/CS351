#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int quotient(int a, int b ) {
    if(b == 0) exit(1);
    int c = 0;
    while (a>=b) {
        a = a-b;
        c+=1;
    }
    return(c);
}

int reste(int a, int b){
    int c = a-b*quotient(a,b);
    return (c);
}

int valeurAbsolue(int a){
    return(abs(a));
}

int pgcd(int a, int b){
    if (b==0) return a;
    else return (pgcd(b,a%b));
}

int ppcm(int a, int b){
    return(quotient(valeurAbsolue(a*b),pgcd(a,b)));
}

int puissanceMB  (int  x,  int  n){
    int N = n;
    int y = 1;
    int z = x;
    while(N!=0){
        if(N%2==0){
            N/=2;
            z *= z;
            }
        else {
            N/=2;
            y *= z;
            z*=z;
        }
    }
    return(y);
}

int sommeDesImpairs (int d, int f) {
    if (d%2== 0 || f%2 ==0) exit(1);
    if (d>= f) exit(12);
    int s = 0;
    while(d<f){
        s +=d;
        d+=2;
    }
    return (s+f);
}

int estUneDecompositionDe(int d, int f){
    if (d%2== 0 || f%2 ==0) exit(1);
    if (d>= f) exit(12);
    int a  = sommeDesImpairs(d,f);
    int b = 1 ;
    while((b*b*b)<a){
        b+=1;
    }
    if ((b*b*b)==a) printf("%i\n", b);
    else printf("-1\n");
    return 0;
}

int fonction_valide(int a, int b){
    if(a == b) return 0;
    else return 1;
}

int main(void){
    printf("Si le test est bon :0, si il est faux 1.\n");
    // test de quotient
    printf("%i\n",fonction_valide(quotient(2,4),0));
    printf("%i\n",fonction_valide(quotient(4,2),2));

    // test de reste
    printf("%i\n",fonction_valide(reste(18,4),2));
    printf("%i\n",fonction_valide(reste(25,31),25));

    //test de valeur Absolue
    printf("%i\n",fonction_valide(valeurAbsolue(-5),5));
    printf("%i\n",fonction_valide(valeurAbsolue(6),6));
    printf("%i\n",fonction_valide(valeurAbsolue(0),0));

    // test de pgcd
    printf("%i\n",fonction_valide(pgcd(28,77),7));
    printf("%i\n",fonction_valide(pgcd(18,42),6));
    printf("%i\n",fonction_valide(pgcd(21,15),3));

    // test de ppcm
    printf("%i\n",fonction_valide(ppcm(28,77),308));
    printf("%i\n",fonction_valide(ppcm(18,42),126));
    printf("%i\n",fonction_valide(ppcm(60,168),840));

    // test de puissance
    printf("%i\n",fonction_valide(puissanceMB(2,10),1024));
    printf("%i\n",fonction_valide(puissanceMB(2,0),1));
    printf("%i\n",fonction_valide(puissanceMB(3,3),27));

    // test de Somme des Impairs
    printf("%i\n",fonction_valide(sommeDesImpairs(3,5),8));
    printf("%i\n",fonction_valide(sommeDesImpairs(5,3),1));
    printf("%i\n",fonction_valide(sommeDesImpairs(4,5),1));

    // test de Decomposition
    printf("%i\n",fonction_valide(estUneDecompositionDe(7,13),-1));
    printf("%i\n",fonction_valide(estUneDecompositionDe(7,11),3));

}
