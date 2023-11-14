#include <stdio.h>
#include <stdbool.h>
#include "pile.h"
int operation(int operande1, int operande2,char operation){
    int resultat ;
    switch(operation){
        case '+' : resultat = operande1 + operande2 ; break ;
        case '-' : resultat = operande1 - operande2 ; break ;
        case '*' : resultat = operande1 * operande2 ; break ;
        case '/' : resultat = operande1 / operande2 ; break ;
    }
    return resultat ;
}


int calculPF_V1(pileInt maPile){
    int res ;
    if(!estPileVide(maPile)){
        int nb_entiers = 0;
        int nb_char = 0;
        int calcul[4];
        int i= 0 ;
        while(nb_entiers<2 ||  nb_char<1){
            int x = depiler(maPile);
            if(x=='*' || x=='+' || x=='-' || x=='/'){ // on cherche l'opération
                nb_char ++;
                calcul[i] = x;
                i++;
            }
            if(x=='\0') return res=calcul[i-1] - 48 ; // cas d'arrêt de la fonction récursive
            else { // si on a un chiffre/nombre
                nb_entiers ++;
                calcul[i] = x;
                i++;
            }
        }
        char op = calcul[i-2] ;
        int op2 = calcul[i-3] - 48 ;
        int op1 = calcul[i-4] - 48 ;
        res = operation(op1,op2,op);
        empiler(maPile,res+48);
        if(i>4){
                empiler(maPile,calcul[i-5] );
        }
    res = calculPF_V1(maPile);
    }
    return res;
}

int calculPF_V2(char tab[],int n){
    int x = 0 ;
    pileInt maPile = creerPile(); // on empile des char.
    while(x!=n){
        if(tab[x]=='*' || tab[x]=='+' || tab[x]=='-' || tab[x]=='/'){
            int res ;
            int a = depiler(maPile) - 48; // int
            int b = depiler(maPile) - 48; // int (plus simple pour le calcul)
            printf("%i\n%i\n",a,b);
            switch(tab[x]){
                case '+' : empiler(maPile,b+a+48) ; break ;
                case '-' : empiler(maPile,b-a+48) ; break ;
                case '/' : empiler(maPile,b/a+48) ; break ;
                case '*' : empiler(maPile,b*a+48) ; break ;
            }
            x++;
        }
        else{
            empiler(maPile,tab[x]); // char
            x++;
        }
    }
    return depiler(maPile) - 48;
}

int main(void){
    pileInt maPile = creerPile();
    char tableau[9] = {'4','2','+','5','*','8','6','-','/'};
    for (int i=8;i>=0;i--){
        empiler(maPile,tableau[i]);
    }
    int res1 = calculPF_V1(maPile);
    printf("le résultat du calcul est : %i\n",res1);
    /* la version 2 est plus efficace, plus juste*/
    int res2 = calculPF_V2(tableau,9) ;
    printf("le résultat du calcul est : %i\n",res2);
    return 0;
}