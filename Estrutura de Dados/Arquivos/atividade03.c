#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int getArrayFromFile(FILE* file, int** vet){

    int qtdArray = 0;

    char str[10];
    fgets(str, 10, file);

    qtdArray = atoi(str);
    int* vet3 = (int*) malloc(qtdArray * sizeof(int));
    

    int vetposicnew = 0;
    fgets(str, 10, file);
    while (!feof(file)) {
       
        char strNumero[] = "";
        strcpy(strNumero, "");
        int strlenT = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if(str[i] == ' ' && strlenT > 0 ){

                vet3[vetposicnew++] = atoi(strNumero);
                
                strcpy(strNumero, "");
                strlenT = 0;
            }else{
                strNumero[strlenT] = str[i];
                strlenT++;
            }
        }

        fgets(str, 10, file);
    }

    free(*vet);

    *vet = (int*) malloc(qtdArray * sizeof(int));
    *vet = vet3; 

    return qtdArray;
   
};

void sort_array(int* vet, int tam){

    int Menor, Ordenadas, Temp;

    Ordenadas = -1;

    do {
        Ordenadas++;

        Menor = Ordenadas;

        for (int I = Ordenadas + 1; I < tam; I++)
            if (vet[I] < vet[Menor])
                Menor = I;

        Temp = vet[Ordenadas];
        vet[Ordenadas] = vet[Menor];
        vet[Menor] = Temp;
    }
    while (Ordenadas < tam);


};

void escreve_array(int* vet, int tam, FILE* file){

    char charValue = tam+'0';
    fputs(&charValue, file);
    fputs("\n", file);
    

    char strNumero[tam * 2];
    
    int lenString = 0;
    for (int i = 0; i < (tam - 1); i++)
    {
       charValue = vet[i]+'0';   

       strNumero[lenString++] = charValue;
       strNumero[lenString++] = ' ';
    }
    
    fputs(strNumero, file);

};


int main(){

    int* v = (int*) calloc(3, sizeof(int));

    FILE* file = fopen ("atividade03.txt", "r+");
    if(file == NULL ) {
        printf("Error number: %d\n", errno);    
        printf("Msg: %s\n", strerror(errno ));
        return 0;    
    }

    int qtdArray = getArrayFromFile(file, &v);

    sort_array(v, qtdArray);

    FILE* fileWrite = fopen ("atividade03_escrita.txt", "w");
    if(fileWrite == NULL ) {
        printf("Error number: %d\n", errno);    
        printf("Msg: %s\n", strerror(errno ));
        return 0;    
    }

    escreve_array(v, qtdArray, fileWrite);

    fclose(file);
    fclose(fileWrite);

    return 1;
}    