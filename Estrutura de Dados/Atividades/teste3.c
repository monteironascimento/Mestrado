#include <stdio.h>

void produto(int *v1, int *v2, int *v3, int N){

    for (int i = 0; i < N; i++)
    {
        v3[i] = v2[i] * v1[i];
    }
    
};

int main(){

    int N = 10;
    int v1[N] ;
    int v2[N] ;
    int v3[N] ;
    


     produto(v1, v2, v3, N);

    return;
}
