#include <stdio.h>

void triInsertion(int tab[],int n){
    for(int i=1;i<n;i++){
        int x = tab[i];
        int j = i;
        while(j>0 && tab[j-1]>x){
            tab[j] = tab[j-1];
            j-=1;
        }
        tab[j] =x;
    }
}

void afficher_tableau(int tab[],int n){
    for(int i=0;i<n;i++){
        printf("%i\n",tab[i]);
    }
}

int main(void){
    int tableau[8] = {6,5,3,1,8,7,2,4};
    triInsertion(tableau,8);
    afficher_tableau(tableau,8);
    return 0;
}