#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "gestion.h"
#include "polynome.h"
#include "matrices.h"

// pour des raisons de lisibilité du code de test, je déclare ici toutes les varaible qui serviront pour le tests, à savoir testX la valeur que je teste et verifX la valeur attendue


// Pour test_gestion
// les tableaux tests prennent 5 notes
// les tableaux de vérification ont 5 statistiques :note minimum, note max, moyenne, variance et écarttype.

float test_1 [5] = {12.0,13.5,8.5,14.7,6.0};
float valid1 [7] = {6.0,14.70,10.94,10.43,3.22,1.00,-1.00};
float test_2 [0]= {};
float valid2 [7]= {0.0,0.0,0.0,0.0,0.0,-1.0,-1.0};
float test_3 [5]= {4.0,3.5,12.8,4.0,17.5};
float valid3 [7]= {3.5,17.5,8.36,32.97,5.74,0.0,4.0};
float test_4 [5]= {5.0,5.0,5.0,5.0,5.0};
float valid4 [7]= {5.0,5.0,5.0,0.0,0.0,0.0,-1.0};

// pour test_polynôme
float pol_1 [4] = {1,3,5,6}; // le polynôme 6X^3 + 5X^2 + 3X + 1
float pol_2 [5] = {0,0,0,2,4}; // le polynôme 4X^4 + 2X^3

//pour test_matrices
int matriceA[2][3] = {{1,0,4},{-1,2,-5}};
int matriceB[2][3] = {{2,-3,1},{5,8,2}};
int matriceC[3][2] = {{0,1},{2,-1},{3,4}};
int res_somme[2][3] ={{3,-3,5},{4,10,-3}};
int res_transp[2][3] = {{0,2,3},{1,-1,4}};
int res_prod[2][2] ={{12,17},{11,-24}};

bool test_gestion(float test[5],float valid[7],float val1,float val2){
    float inter [7] ;
    inter[0] = minimumNote(5,test);
    inter[1] = maximumNote(5,test);
    inter[2] = calculeMoyenne(5,test);
    inter[3] = calculeVariance(5,test);
    inter[4] = calculeEcartType(5,test);
    inter[5] = rechercherValeur(5,test,val1);
    inter[6] = rechercherValeur(5,test,val2);
    bool a ;
    for (int i=0 ; i<7 ; i++){
        if (inter[i]== (valid[i]+ 0.000000)) a =true;
        else {
            a = false;
            printf("%i\n",i);
            break;
        }
    }
    return a ;
}

// dans l'appel de la fonction on donne la taille du polynôme, le polynôme, la valeur de la variable X, et la valeur du polynôme en X0 ( celle qu'on veut trouver)
bool test_polynome(int taille, float polynome[taille], int variable, int res){
    bool a ;
    if (valeurPolynome(polynome,taille,variable)==res) a = true;
    else a = false;
    return a;

}

// l1,col1,mat1 sont des variables qui correspondent à la première matrice (terme 1 de l'addition)
// l2,col2,mat2 sont des variables qui correspondent à la deuxième matrice (terme 2 de l'addition)
// l1,col1,mat3 sont des variables qui correspondent à la troisième matrice (résultat 1 de l'addition)
// l1,col1,res_somme sont des variables qui correspondent au résultat voulu de l'addition
// l3,col3,matrice_transp sont des variables qui correspondent à la matrice qu'on veut transposer
// col3,l3,mat4 sont des variables qui correspondent au résultat de la transposition
// col3,l3,res_transp sont des variables qui correspondent au résultat voulu de la transposition
// l5,col5,mat5 sont des variables qui correspondent au premier terme de la multiplication
// l6,col6, mat6 sont des variables qui correspondent au second terme de la multiplication
//mat_mul[l5][col6] est le résultat de la multiplication
//l7, col7,res_mult sont des variables qui correspondent à la matrice résultat de la multiplication qu'on veut avoir

bool test_matrices(int l1, int col1, int mat1[l1][col1],int l2,int col2, int mat2[l2][col2],int mat3[l1][col1],int res_somme[l1][col1],int l3,int col3, int matrice_transp[l3][col3] ,int mat4[col3][l3],int res_transp[col3][l3],int l5,int col5,int mat5[l5][col5],int l6,int col6, int mat6[l6][col6],int mat_mul[l5][col6],int l7,int col7,int res_mult[l7][col7]){
    // affichage
    printf("Test de l'initialisation d'une matrice 2x2\n");
    matrice();
    //addition
    printf("Test de l'addition...\n");
    bool a;
    additionnerMatrices(l1,col1,mat1,l2,col2,mat2,mat3);
    for(int i = 0 ; i<l1 ;i++){
        for(int j =0; j<col1 ;j++){
            if(mat3[i][j] == res_somme[i][j]) a = true;
            else{
                a = false;
                printf("Test addition : NOPE\n");
                printf("Le problème se situe à la %i ième ligne et %i colonne\n",i,j);
                break;
            }
        }
    }
    //transposition
    printf("Test de la transposition...\n");
    transposee(l3,col3,matrice_transp,mat4);
    bool b;
    for(int i =0; i<l3; i++){
        for(int j =0;j<col3;j++){
            if(mat4[i][j] == res_transp[i][j]) b = true;
            else{
                b = false;
                printf("Le problème se situe à la %i ième ligne et %i colonne\n",i,j);
                break;
            }
        }
        break;
    }

    // multiplication
    printf("Test de la multiplication...\n");
    multiplication(l5,col5,mat5,l6,col6,mat6,mat_mul);
    bool c;
    for(int i =0; i<l5; i++){
        for(int j =0;j<col6;j++){
            if(mat_mul[i][j] == res_prod[i][j]) c = true;
            else{
                c = false;
                printf("Le problème se situe à la %i ième ligne et %i colonne\n",i,j);
                break;
            }
        }
        break;
    }



return (a && b && c);
}


int main(void){
    // tests de gestion
    bool a = test_gestion(test_1,valid1,13.5,10.5);
    if (a==true) printf("Gestion Test 1 : OK\n");
    else printf("Gestion Test 1 : NOPE\n");
    bool b = test_gestion(test_2,valid2,4.0,17.5);
    if (b==true) printf("Gestion Test 2 : OK\n");
    else printf("Gestion Test 2 : NOPE\n");
    bool c = test_gestion(test_3,valid3,4.0,17.5);
    if (c==true) printf("Gestion Test 3 : OK\n");
    else printf("Gestion Test 3 : NOPE\n");
    bool d = test_gestion(test_4,valid4,5.0,8.0);
    if (d==true) printf("Gestion Test 4 : OK\n");
    else printf("Gestion Test 4 : NOPE\n");

    // tests de polynome

    bool e = test_polynome(4,pol_1,2,75);
    if (e==true) printf("Gestion Test 5 : OK\n");
    else printf("Gestion Test 5 : NOPE\n");
    bool f = test_polynome(5,pol_2,3,378);
    if (f==true) printf("Gestion Test 6 : OK\n");
    else printf("Gestion Test 6 : NOPE\n");

    // tests de matrices
    int matrice3[2][3]; // matrice résultat de l'addition
    int matrice4[2][3]; // matrice résultat de la transposition
    int matrice5[2][2]; // matrice résultat de la multiplication
    bool g = test_matrices(2,3,matriceA,2,3,matriceB,matrice3,res_somme,3,2,matriceC,matrice4,res_transp,2,3,matriceA,3,2,matriceC,matrice5,2,2,res_prod);
    if(g==true) printf("Gestion Test 7 : OK\n");
     // on additionne les matrices A et B, la matrice 3 en est le résultat, res_somme et res_transp sont les résultats que nous attendons.
     // matriceC est la matrice à transposer,matrice4 est le résultat de la transposition
    return 0;

 }
