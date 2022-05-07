#include <stdio.h>

void normaliza(float *v, int N){

    float maiorElemento = 0;

    for (int i = 0; i < N; i++)
    {
        if(maiorElemento < v[i]){
            maiorElemento = v[i];
        }
    }
    

    for (int i = 0; i < N; i++)
    {
        v[i] = v[i] / maiorElemento;
    }

};

int main(){

    float v[5]={0,0,1,2,2};
    normaliza(v, 5);
    for (int i = 0; i < 5; i++){
    printf("%.1f ", *(v+i));
    }

    float v4[10] = {5,5,5,10,15,20,25,40, 10, 10};
    normaliza(v4, 10);
    for (int i = 0; i < 10; i++){
        printf("%.1f ", *(v4+i));
    }

    return 0;
}
