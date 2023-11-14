#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

//1. initialise les éléments d'une matrice de taille 2x2 à 0; puis l'affiche
int  matrice(void){
    int mat[2][2] = {{0,0},{0,0}};
    for (int row = 0 ; row<2; row++){
        printf("|");
        for (int col = 0 ; col<2; col++){
            printf(" %i ",mat[row][col]);
        }
        printf("|\n");
    }
    return 0;
}

//3.
void afficherMatrice(int row, int col, int mat[row][col]){
    for (int i = 0 ; i<row; i++){
        printf("|");
        for (int j = 0 ; j<col; j++){
            printf(" %i ",mat[i][j]);
        }
        printf("|\n");
    }
}

//4.
int additionnerMatrices(int row1, int col1, int mat1[row1][col1], int row2, int col2, int mat2[row2][col2], int matrice3[row1][col1]){
    if(row1!=row2) exit(1);
    if(col1!=col2) exit(1); // vérification des prérequis pour additioner les matrices
    for (int i = 0 ; i<row1; i++){
         for (int j = 0 ; j<col1; j++){
            matrice3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return 0;
}

//5. mat est la matrice à transposer et mat2 est le résultat
int transposee (int row, int col, int mat[row][col],int mat2[col][row]){
    for (int i =0 ; i<row; i++){
        for (int j = 0 ; j<col; j++){
            mat2[j][i] = mat[i][j];
        };
    }
    return 0;
}

//6.ol1
//row1,col1,Mat1 sont des variables qui correspondent au premier terme de la multiplication
//row2,col2,Mat2 sont des variables qui correspondent au deuxième terme de la multiplication
//row1,col2,Mat3 sont des variables qui correspondent au résultat de la multiplication

int multiplication(int row1,int col1,int mat1[row1][col1],int row2,int col2,int mat2[row2][col2],int mat3[row1][col2]){
    if(col1!=row2) exit(1);
     for (int n=0;n<row1;n++){
        for (int i =0 ; i<row2; i++){
            for (int j = 0 ; j<col1; j++){
                mat3[i][j] = 0;
                for (int  k= 0 ; k<col1; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
    return 0;
}