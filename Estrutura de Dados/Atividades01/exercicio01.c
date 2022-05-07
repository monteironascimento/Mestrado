#include <stdio.h>

int main (){

    int  indice  = 0;
    float salario =   0.0;

    do{

        if(indice == 0){
            printf("Informe o Indice de Produtividade: 1,2,3: \t");
        }else{
            printf("Indice Incorreto, informe o Indice de Produtividade: 1,2,3: \t");
        }
        scanf("%d", &indice);
        
    }while(indice == 0 || indice > 3);


    do{
        printf("Informe o salario para calculo: \t");
        scanf("%f", &salario);

    }while(salario < 0.0);

    switch(indice){
        case 1: 
            salario += salario * 0.65;
            break;        
        case 2:
            salario += salario * 0.20;
            break;
        case 3:
            salario = salario * 0.9;
            break;
    }

    printf("O novo salario calculado com abono é de (%f) ", salario);

    return 0;
}