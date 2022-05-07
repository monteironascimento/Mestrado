#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int contarLetraA(FILE *file){

    int contador = 0;
    char c = fgetc(file);
    while(feof(file)==0) {
        if(c == 'A' || c == 'a'){
            contador++;
        }
        c = fgetc(file);
    }

    return contador;
}

int contarSubstring(FILE *file, char* str){

    int contador = 0;
    char variavel = *(str);
    
    char c = fgetc(file);
    while(feof(file)==0) {
        if(c == variavel){
            contador++;
        }
        c = fgetc(file);
    }

    return contador;
};

int main(){

    FILE* file = fopen ("atividade01.txt", "r");
    if(file == NULL ) {
        printf("Error number: %d\n", errno);    
        printf("Msg: %s\n", strerror(errno ));
        return 0;    
    }

    int contadorA = contarLetraA(file);

    file = fopen ("atividade01.txt", "r");
    char letra = 'e';
    int contadorC = contarSubstring(file, &letra);

    fclose(file);

    printf("\nLETRA B : %d",contadorA);
    printf("\nLETRA INPUT : %d",contadorC);
  
    return 1;
   
}    