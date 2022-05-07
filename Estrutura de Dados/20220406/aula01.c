#include <stdio.h>
#include <stdlib.h>


int main (){

    FILE* file = fopen ("arquivo.txt", "r");

    int quantidade = 0;
    char c = fgetc(file);
    while(feof(file)==0) {
        
        if(c == ' '){
            quantidade++;
        }

        c = fgetc(file);
    }

    printf("CAMPOS VAZIOS: %d", quantidade);

    return 0;
}