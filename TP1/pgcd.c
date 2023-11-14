
#include <stdio.h>

int pgcd(int a,int b)
{
	if(a<0) return 0;
	if(b<1) return a;
}

int main(void)
{
	int a,b;
	printf("Entrez deux entiers a et b:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	return 0;
}
