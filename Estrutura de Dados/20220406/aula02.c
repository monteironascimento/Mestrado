#include <stdio.h>
#include <stdlib.h>


int main (){

    FILE* file = fopen ("arquivo.txt", "r");
    FILE* file2 = fopen ("arquivo2.txt", "w");

    int quantidade = 0;
    char c = fgetc(file);
    while(feof(file)==0) {
        c = fgetc(file);
        fputc(c, file2);
    }

    fclose(file);
    fclose(file2);    

    return 0;
}