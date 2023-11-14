#include <stdio.h>


void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void tri_hollandais(int tab[],int taille){
    int b=0;
    int w=1;
    int r = taille-1;
    while(w<=r){
        if(3<=tab[w] && tab[w]<=6) w+=1;
        else if (tab[w]<3){
            swap(&(*(tab+b)),&(*(tab+w)));
            b+=1;
            w+=1;
        }
        else {
            swap(&(*(tab+w)),&(*(tab+r)));
            r-=1;
        }
    }
}

void afficher_tableau(int *tab,int n){
    for(int i =0;i<n;i++){
        printf("%i\n",(*(tab+i)));
    }
}

int main(void){
    int tableau[15] = {5,8,1,4,3,9,2,7,3,8,1,4,5,3,8};
    tri_hollandais(tableau,15);
    afficher_tableau(tableau,15);
    return 0;
}