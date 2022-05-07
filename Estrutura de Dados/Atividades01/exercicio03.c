#include <stdio.h>

int main (){

    float vet1[12][4]  = {
        {789.99, 876.01, 887.88, 180.20 }, //linha 1
        {100.0, 2277.8, 18098.8, 8888.10}, //linha 2
        {789.99, 764.99, 5260.9, 777.33}, //linha 3
        {123.0, 91.8, 8912.8, 324.10}, //linha 4
        {12980.0, 298.8, 123.8, 4235.10}, //linha 5
        {82.0, 456.8, 18273.8, 612.10}, //linha 6
        {8761.0, 2344.8, 123.8, 876.10}, //linha 7
        {100.0, 2277.8, 18098.8, 8888.10}, //linha 8
        {112882.0, 0192.8, 821.8, 1277.10}, //linha 9
        {1232.0, 12345.8, 18234098.8, 34545.10}, //linha 10
        {35.0, 234.8, 234.8, 234.10}, //linha 11
        {100.0, 2277.8, 18098.8, 8888.10} //linha 12
    };



    float totalAno = 0;

    for(int i=0; i < 12; i++){
        float totalMes = 0;

        for(int y=0; y < 4; y++){
            totalMes += vet1[i][y];  
            totalAno += vet1[i][y];  
        }

        if(i==0){
            printf("Total Mes de Janeiro:  %f\n", totalMes);
        }else if(i == 1){
            printf("Total Mes de Fevereiro:  %f\n", totalMes);
        }else if (i == 2){      
            printf("Total Mes de Março:  %f\n", totalMes);
        }else if (i == 3){
            printf("Total Mes de Abril:  %f\n", totalMes);                
        }else if (i == 4){
            printf("Total Mes de Maio:  %f\n", totalMes);                
        }else if (i == 5){
            printf("Total Mes de Junho:  %f\n", totalMes);
        }else if (i == 6){
            printf("Total Mes de Julho:  %f\n", totalMes);
        }else if (i == 7){
            printf("Total Mes de Agosto:  %f\n", totalMes);
        }else if (i == 8){
            printf("Total Mes de Setembro:  %f\n", totalMes);
        }else if (i == 9){
            printf("Total Mes de Outubro:  %f\n", totalMes);
        }else if (i == 10){
            printf("Total Mes de Novembro:  %f\n", totalMes);
        }else if (i == 11){
            printf("Total Mes de Dezembro:  %f\n", totalMes);
        }

        for(int y=0; y < 4; y++){
            
            if(y == 0){
                printf("Semana 1: %f\n", vet1[i][y]);
            }else if(y == 1){
                printf("Semana 2: %f\n", vet1[i][y]);    
            }else if (y == 2){
                printf("Semana 3: %f\n", vet1[i][y]);    
            }else if (y == 3){
                printf("Semana 4: %f\n", vet1[i][y]);    
            }
        }

        printf("\n\n\n");

    }




    
    return 0;
}