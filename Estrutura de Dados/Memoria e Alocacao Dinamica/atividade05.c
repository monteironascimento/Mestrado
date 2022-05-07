#include <stdio.h>
#include <stdlib.h>


int vetor_dobraTamanho(int** v, int tamanho){
    int new_tamanho = tamanho * 2;

    
    int* vet3 = (int*) malloc(new_tamanho * sizeof(int));
    
    int qtInterseccao = 0;
    for (int i = 0; i < new_tamanho; i++)
    {

        if(i < (tamanho)){
            vet3[qtInterseccao++] = *(*v + i);
        }else{
            vet3[qtInterseccao++] = 0;
        }
    }

    free(*v);

    *v = (int*) malloc(new_tamanho * sizeof(int));
    *v = vet3; 

    return new_tamanho;

}; 


int main(){
    int* v = (int*) calloc(3, sizeof(int));
    v[0] = 2;
    v[1] = 4;
    v[2] = 6;
    
    int novoTamanho = vetor_dobraTamanho(&v,3); 

    for (int i = 0; i < novoTamanho; i++)
    {
        printf("%d - ",v[i]);
    }
    
    //Resultado esperado
    // [2,4,6,0,0,0]
}