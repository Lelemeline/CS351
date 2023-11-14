#include <stdio.h>

int factorielle(int a){
    int b = a;
    while(a!=1)
    {   a -= 1;
        b *= a;
    }
    return b ;
}

int factorielleBis (int m){
    int n = 0;
    while( factorielle(n)<= m ){
        n+=1;
    }
    return n;
}

int main(void){
    int a;
    printf("Donnez un entier naturel n : \n");
    scanf("%i",&a);
    printf("%i! = %i\n" ,a, factorielle(a));
    printf("Donnez un entier naturel m : \n");
    scanf("%i", &a);
    printf (" Le plus petit entier dont la factorielle est supérieur à %i est %i\n",a,factorielleBis(a));
}