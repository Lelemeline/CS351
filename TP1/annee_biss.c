#include <stdio.h>

int main(void){
	printf("Donnez une année\n");
	int a;
	scanf("%d",&a);
	if (a%4 == 0) {
		if (a%100 == 0){
			if (a%400 !=0 ) printf (" L'année %d n'est pas bissextile\n", a);
			else printf (" L'année %d est bissextile\n", a);
		}
		else printf(" L'année %d est bissextile\n", a);
	}
	else printf (" L'année %d n'est pas bissextile\n", a);
}