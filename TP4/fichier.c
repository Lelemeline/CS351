#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void afficherTableau(int T[], int nb) {
    for(int i=0; i<nb;i++) printf("%c\n",T[i]);
}

int lireDonnees(char  nomFichier[],int Tableau[]) {
    FILE* fichier;
    int i = 0;
    char n ;
    fichier= fopen(nomFichier,"r");
    while(EOF!=fscanf(fichier,"%c",&n)){
            if( n>='0' && n<='9')
            {
                Tableau[i] = n;
                i++;}

    }
    fclose(fichier);
    return i;
}



//fonction nécessaire à la fonction de tri
void swap(int *i, int *j){
    int temp = *i;
    *i=*j;
    *j=temp;
}

//tri type "BubbleSort". On compare les éléments adjacents et on les "swap" au besoin jusqu'à ce que toute la liste soit triée.
void tri (int T[], int nb) {
    for(int i=0; i<nb-1;i++){
        for (int j=0;j<nb -i -1;j++){
            if(T[j]>T[j+1]){
                swap(&T[j],&T[j+1]);
            }
        }
    }
}
void enregistrerDonnees(char nomFichier[], int T[], int nb) {
    FILE *fichier;
    fichier = fopen(nomFichier,"w+") ;
    for (int i =0 ; i<nb ; i++){
        fprintf(fichier,"%d",T[i]);
    }
    fclose(fichier);
}

int main(void) {
    // Test
    int T[] = {1,8,9,2,3,4,5};
    tri(T,7);
    enregistrerDonnees("Je code et ça marche.txt",T,7);
    int S[7] = {'0'};
    printf("Le fichier a %i élément(s) :les voici \n",lireDonnees("Je code et ça marche.txt",S));
    afficherTableau(S,7);
    return 0;
}
