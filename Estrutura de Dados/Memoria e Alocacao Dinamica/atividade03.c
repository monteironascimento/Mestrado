#include <stdio.h>
#include <stdlib.h>

int* uniao(int *v1, int *v2, int n1, int n2, int* qtde){

    int tm = n1+n2;
    int vet[tm];

    int addVet = 0;
    int add = 0;
    for (int i = 0; i < n1; i++)
    {
        add = 1;
        for (int j = 0; j < tm; j++)
        {
            if(vet[j] == v1[i]){
                add = 0;
            }
        }

        if(add == 1){
            vet[addVet++] = v1[i];
        }
        
    }

    for (int i = 0; i < n2; i++)
    {
        add = 1;
        for (int j = 0; j < tm; j++)
        {
            if(vet[j] == v2[i]){
                add = 0;
            }
        }

        if(add == 1){
            vet[addVet++] = v2[i];
        }
        
    }


    int* vet3 = (int*) malloc(tm * sizeof(int));
    
    int qtInterseccao = 0;
    for (int i = 0; i < tm; i++)
    {
        vet3[qtInterseccao++] = vet[i];
        
    }
    *qtde = qtInterseccao;
    
    return vet3;

};

int main (){

    int qtElementosV1 = 2;
    int qtElementosV2 = 3;
    int qtArrayV3;

    int v1[]  = {1,2};
    int v2[]  = {2,3,4};

    int *v3 = uniao(v1, v2, qtElementosV1, qtElementosV2, &qtArrayV3);

    for (int i = 0; i < qtArrayV3; i++){
        printf("%d ", v3[i]);
    }

    return 0;
}