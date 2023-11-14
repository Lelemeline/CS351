#include <stdio.h>


int version_1(void){
	printf("Donnez un entier naturel\n");
	int a;
	scanf("%d",&a);
	int b =0;
	while (a!=0){
	b+=a;
	a-=1;}
	printf("%d\n",b);
	return 0;
	}
	
int version_2(void){
	printf("Donnez un entier naturel\n");
	int a =0;
	scanf("%d",&a);
	int b =0;
	do {b+=a;
	a-=1;} while (a!=0);
	printf("%d\n",b);
	return 0;
	
}
int main(void){
	version_1();
	version_2();
}