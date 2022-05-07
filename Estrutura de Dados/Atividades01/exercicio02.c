#include <stdio.h>

int main (){

    int vet1[6]  = {0};
    int vet2[6]  = {0};
    int vet3[12]  = {0};

    int vetposic = 0;


    do{
       
        printf("informe o valor do vetor 1: \t");
        scanf("%d", &vet1[vetposic]);
        ++vetposic;

    }while(vetposic < 6);

    vetposic = 0;

    printf("\n");

    do{
       
        printf("informe o valor do vetor 2: \t");
        scanf("%d", &vet2[vetposic]);
        ++vetposic;

    }while(vetposic < 6);


    int posicFinal = 0;
    for(int i=0; i < 6; i++){
        vet3[posicFinal++]  =  vet1[i];  
        vet3[posicFinal++]  =  vet2[i];
    }

    printf("\n\n");

    printf("v1: ");

    for(int i=0; i < 6; i++){
        printf("%d,", vet1[i]);
    }

    printf("\nv2: ");

    for(int i=0; i < 6; i++){
        printf("%d,", vet2[i]);
    }

    printf("\nv3: ");

    for(int i=0; i < 12; i++){
        printf("%d,", vet3[i]);
    }
    
    return 0;
}