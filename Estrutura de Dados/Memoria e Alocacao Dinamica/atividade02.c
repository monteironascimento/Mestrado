#include <stdio.h>
#include <stdlib.h>

int* intersecao(int *v1, int *v2, int n1, int n2, int* qtde){

    int qtInterseccao = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(v1[i] == v2[j]){
                qtInterseccao++;
            }
        }
        
    }

    int* vet3 = (int*) malloc(qtInterseccao * sizeof(int));
    
    qtInterseccao = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(v1[i] == v2[j]){
                vet3[qtInterseccao++] = v1[i];
            }
        }
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

    int *v3 = intersecao(v1, v2, qtElementosV1, qtElementosV2, &qtArrayV3);

    for (int i = 0; i < qtArrayV3; i++){
        printf("%d ", v3[i]);
    }

    return 0;
}