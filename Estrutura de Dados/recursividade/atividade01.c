#include <stdio.h>
#include <string.h>


float soma(int n, float *v){
    if(n <= 0){
        return 0.00;
    }

    float sun = soma(n - 1, v);

    return (sun + v [n-1]);
};


int main(){

    int qtd = 10;

    float vetor[qtd];
    vetor[0] = 10.02;
    vetor[1] = 10.02;
    vetor[2] = 10.02;
    vetor[3] = 10.02;
    vetor[4] = 10.02;
    vetor[5] = 10.02;
    vetor[6] = 10.02;
    vetor[7] = 10.02;
    vetor[8] = 10.02;
    vetor[9] = 10.02;
    float total = soma(qtd, vetor);

    printf("Total: %f", total);
}