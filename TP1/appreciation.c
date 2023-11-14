#include <stdio.h>


int imbriques (void){
	printf("Donnez votre note : \n");
	char a ;
	scanf("%c",&a);
	if (a == 'A') printf ("Très Bien\n");
	else if (a == 'B') printf (" Bien\n");
	else if (a == 'C') printf ("Assez Bien\n");
	else if (a == 'D') printf ("Passable\n");
	else if (a == 'E') printf ("Insuffisant\n");
	else printf("Note inexistante\n");
	return 0;
}

int sequence(void){
	printf("Donnez votre note : \n");
	char a ;
	scanf("%c",&a);
	if (a == 'A') printf ("Très Bien\n");
	if (a == 'B') printf (" Bien\n");
	if (a == 'C') printf ("Assez Bien\n");
	if (a == 'D') printf ("Passable\n");
	if (a == 'E') printf ("Insuffisant\n");
	return 0;
}

int switches(void){
	printf("Donnez votre note : \n");
	char a ;
	scanf("%c",&a);
	switch(a){
	case 'A': printf ("Très Bien\n"); break;
	case 'B': printf (" Bien\n"); break;
	case 'C': printf ("Assez Bien\n"); break;
	case 'D': printf ("Passable\n"); break;
	case 'E': printf ("Insuffisant\n"); break;
	default : printf("Note inexistante\n"); break;
	}
	return 0;
}

int main(void){
	sequence();
	imbriques();
	switches();
}
