#include <stdio.h>
#include <math.h>

void hanoi (FILE *fd, int disque,char A,char B, char C){
    if (disque ==1){
        fprintf(fd,"Disque 1 de %c à %c\n",A,B);
        return ;
    }
    hanoi(fd,disque-1,A,C,B);
    fprintf(fd,"Disque %i de %c à %c\n",disque,A,B);
    hanoi(fd,disque-1,C,B,A);
}

int main(void){
    #define disque 5
    FILE *fd;
    fd = fopen("solution.c","w+"); // Pour le test, on écrit tous les déplacements dans un fichier, qu'on fournit donc en 4e paramètre à la fonction hanoi
    hanoi(fd,disque,'A','B','C');
    fclose(fd); // pour revenir au début du fichier et compter le nombre de lignes, on ferme et on ouvre à nouveau le fichier
    fd = fopen("solution.c","r");
    int nb_deplacement = 0 ;
    char n ;
    while(EOF!=fscanf(fd,"%c",&n)){
        if(n=='\n') nb_deplacement ++;
    }
    if (nb_deplacement == pow(2,disque) - 1) printf("La solution comporte le nombre de déplacement attendus correct; on suppose que tout est bon\n");
    fclose(fd);
}
