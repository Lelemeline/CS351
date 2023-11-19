#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partitionner(int *tab,int d,int f,int pivot){
    swap(&tab[pivot],&tab[f]);
    int j = d;
    for(int i=d;i<f-1;i++){
        if(tab[i]<=tab[f]){
            swap(&tab[i],&tab[j]);
            j+=1;
        }
    }
    swap(&tab[f],&tab[j]);
    return j;
}

void quicksort(int *tab,int d,int f){
    if (d<f){
        int pivot = *(tab+d);
        pivot = partitionner(tab,d,f,pivot);
        quicksort(tab,d,pivot-1);
        quicksort(tab,pivot+1,f);
    }
}

int main(void){
    int tableau[12] = {2,4,9,8,1,8,5,6,7,2,10,3};
    quicksort(tableau,0,11);
    for (int i=0; i<12 ;i++){
        printf("%i\n",tableau[i]);
    }
}
