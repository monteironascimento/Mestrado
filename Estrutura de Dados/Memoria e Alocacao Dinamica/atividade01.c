#include <stdio.h>

int* produto(int *v1, int *v2, int N){

    int* v3[N]; 

    for (int i = 0; i < N; i++)
    {
       v3[i] = v2[i] * v1[i];
    }
    
    return v3;

};

int main (){

    int v1[5]={0,0,1,2,2};
    int v2[5]={0,0,1,2,2};
    int *v3 = produto(v1, v2, 5);

    for (int i = 0; i < 5; i++){
        printf("%d ", *(v3+i));
    }

    return 0;
}