#include <stdio.h>
int main() {
int i, j, k, l; // declaration des variables
i = j = k = l = 0; // initialisation
while(i < 9) { // boucle conditionelle tnat que i strictement inférieur à 9
printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n",
i++, ++j, k--, --l); //affiche i et k puis les incrémente/décrémente et incrémente/décrémente j et l et les affiche
}
printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l); //final
return (0);
} 