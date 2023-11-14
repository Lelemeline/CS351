#include<stdio.h>

#define NBMAX 100
typedef struct {
  float coeff ;/* coefficient du terme */
  int degre ;  /* degré du terme */
} Terme ;
typedef Terme Polynome[NBMAX] ;

// Un  polynôme  (type  Polynome)  est représenté par un tableau de termes classés dans l'ordre décroissant de leurs degrés

void afficherPolynome(Polynome p1){
    int i=0;
    printf("Le résultat est: \n") ;
    while(p1[i+1].degre>0){
        printf("%.2fX^%i + ",p1[i].coeff,p1[i].degre);
        i++;
    }
    printf("%.2fX^%i . \n",p1[i].coeff,p1[i].degre);
}


void addPolynomes(Polynome p1, Polynome p2, Polynome res){
    int i = 0 ;
    int j = 0 ;
    int y = 0 ;
    while(p1[i].degre>= 0 || p2[j].degre>=0){
        if(p1[i].degre == p2[j].degre){
            res[y].degre = p1[i].degre;
            res[y].coeff = p1[i].coeff +p2[j].coeff;
            i++ ;
            j++;
        }
        else if (p1[i].degre > p2[j].degre ) {
            res[y].degre = p1[i].degre;
            res[y].coeff = p1[i].coeff;
            i++ ;
        }
        else if( p1[i].degre < p2[j].degre ) {
            res[y].degre = p2[j].degre;
            res[y].coeff = p2[j].coeff;
            j++ ;
        }
        y++ ;
    }
    res[y].degre = -1;
    afficherPolynome(res);
}

int main (void){
    Polynome a1;
    a1[0].coeff = 3 ;
    a1[0].degre = 8 ;
    a1[1].coeff = 2 ;
    a1[1].degre = 2 ;
    a1[2].coeff = 4 ;
    a1[2].degre = 1 ;
    a1[3].degre = -1 ;
    Polynome b1;
    b1[0].coeff = 6 ;
    b1[0].degre = 4 ;
    b1[1].coeff = 5 ;
    b1[1].degre = 5 ;
    b1[2].coeff = 3 ;
    b1[2].degre = 2 ;
    b1[3].degre = -1 ;
    Polynome c1;
    for (int i=0;i<6;i++){
        c1[i].degre = 0;
        c1[i].coeff = 0;
    }
    addPolynomes(a1,b1,c1);
    addPolynomes(a1,c1,c1);
    return 1;
}