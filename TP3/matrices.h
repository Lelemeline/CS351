#include <stdio.h>
#include <stdlib.h>

int  matrice(void);
void afficherMatrice(int row, int col, int mat[row][col]);
int additionnerMatrices(int row1, int col1, int mat1[row1][col1], int row2, int col2, int mat2[row2][col2],int matrice3[row1][col1]);
int transposee (int row, int col, int mat[row][col],int mat2[col][row]);
int multiplication(int row1,int col1,int mat1[row1][col1],int row2,int col2,int mat2[row2][col2],int mat3[row1][col2]);
