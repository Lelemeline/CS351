#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "gestion.h"

float tab1[20] ={4,2,12,13,18,19,3,8,7,6,20,19,14,12,11,6,7,15,17,9};
float tab2[20] ={5,13,18,12,18,16,14,20,12,14,17,14,18,19,18,14,18,15,18,4};
float tab3[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
float tab4[5] = {12,13.5,8.5,14.7,6};

float afficherNotes(int x, float tab[]){
    for (int i=0; i<x ; i++){
        printf("%f\n",tab[i]);
    }
    return 0;
}

float minimumNote(int x, float tab[]){
    float a = tab[0];
    for(int i = 1; i<x ; i++) {
        if(tab[i]<a)
            a = tab[i] ;
    }
    return a;
}

float maximumNote(int x, float tab[]){
    float a = tab[0];
    for(int i = 1; i<x ; i++) {
        if(tab[i]>a)
            a = tab[i] ;
    }
    return a;
}

float calculeMoyenne(int x, float tab[]){
    float somme = 0.0;
    for (int i=0; i<x ; i++){
        somme+= tab[i];
    }
    return ((float)((somme/ x) *100)/100) ;
}

float calculeVariance(int x, float tab []){
    float somme =0;
    float distance =0 ;
    float inter= 0;
    float moyenne = calculeMoyenne(x,tab);
    for (int i=0; i<x ; i++){
        distance = tab[i] - moyenne ;
        inter = distance * distance ;
        somme+= inter;
    }
    return((float)((int)((somme/ x) *100))/100);
}


 float calculeEcartType(int x, float tab[]){
     float variance = calculeVariance(x,tab);
     return ((float)((int)(sqrt(variance)*100))/100);
}

int rechercherValeur(int x,float tab[],float find){
   int a;
   for (int i=0; i<x ; i++){
        if (tab[i]==find){
            a = i;
            break;}
        else  a =-1;
    }
    return a;
}
