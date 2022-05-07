#include <stdio.h>
#include <stdlib.h>


int* vetor_criarA(int tam, int valor){

    int* v2 = (int*) malloc (tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
       v2[i] = valor;
    }
    
    return v2;
}

void vetor_criarB(int tam, int valor, int** endVetor){

    *endVetor = vetor_criarA(tam, valor);
    
}

void vetor_imprimir(int* vetor, int tamv){

    for (int i = 0; i < tamv; i++)
    {
       printf("VALOR : %d %d", i, vetor[i]);
    }

}

int main(){

    int tamanhoA = 10;
    int tamanhoB = 10;
    int *vetA;
    int *vetB;

    vetA = vetor_criarA(tamanhoA, 10);
    vetor_criarB(tamanhoB, 0, &vetB);

    vetor_imprimir(vetA, tamanhoA);
    vetor_imprimir(vetB, tamanhoB);

    return 0;
}