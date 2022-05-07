#include <stdio.h>
#include <stdlib.h>


int* vetor_novoA(int quantidade, int valor){


    int* vet3 = (int*) malloc(quantidade * sizeof(int));
    
    int qtInterseccao = 0;
    for (int i = 0; i < quantidade; i++)
    {
        vet3[qtInterseccao++] = valor;
        
    }

    return vet3;

};

void vetor_novoB(int quantidade, int valor,  int** endVetor){

   *endVetor = (int*) calloc(quantidade,sizeof(int));
   for(int i=0; i < quantidade; i++){
       (*endVetor)[i] = valor;
   }

};


int main(){
   int *v1, *v2;
   v1 = vetor_novoA(10, -1);
   vetor_novoB(5, 0, &v2);
}