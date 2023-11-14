
# include <stdio.h>
# include <stdbool.h>
#include "polynome.h"

float valeurPolynome(float A[],int N, float x){
    float somme  = A[0];
    float inter2 = 0.0;
    for (int i =1; i<N; i++){
        float inter = 1.0 ;
        for(int j=i; j>0 ; --j){
            inter *=x;
        }
        inter2 = inter * A[i] ;
        somme += inter2;
    }
    return somme;
}
