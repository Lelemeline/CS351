
#include <stdio.h>

int fibonnacci(int n)
{
	if(n<1) return 0;
	if(n==1) return 1;
	return fibonnacci(n-1)+fibonnacci(n-2);
}

int main()
{
	int n=0;
	printf("Entrer un entier n\n");
	scanf("%d",&n);
	printf("Fib %d=%d\n",n,fibonnacci(n));
	return 0;
}
