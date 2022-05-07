#include <stdio.h>

int *produto(int *v1, int *v2, int N){

    int v3[N];

    for (int i = 0; i < N; i++)
    {
        v3[i] = v2[i] * v1[i];
    }

    return v3;
    
};

int main(){

    int N = 10;
    int v1[N] ;
    int v2[N] ;
    int v3[N] ;
    


    v3[N] = produto(v1, v2, N);

    return;
}
