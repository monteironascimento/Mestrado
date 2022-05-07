#include <stdio.h>

int negativos(float *vet, int n){

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(vet[i] < 0){
            count++;
        }
    }
        
    return count;
};


void inversa(int *vet, int size){


    for (int i = (size - 1); i >= 0; i--)
    {
        printf("%d ",vet[i]);
    }
    


};