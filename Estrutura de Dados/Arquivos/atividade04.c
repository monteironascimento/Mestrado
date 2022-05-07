#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct {
    int numero;
    char modelo[100];
    char cor[40];
    float preco;
    int ano;
} Veiculo;

void saveVeiculo(FILE* file, Veiculo* veiculo){

    fputs(atoi(veiculo->numero), file);
    fputs(" ", file);
    fputs(veiculo->modelo, file);
    fputs(" ", file);
    fputs(veiculo->cor, file);
    fputs(" ", file);
    fputs(lltoa(veiculo->preco), file);
    fputs(" ", file);
    fputs(atoi(veiculo->ano), file);
    fputs(" ", file);
    
    fputs("\n", file);
}

int main(){

    FILE* file = fopen ("atividade04.txt", "w+");
    if(file == NULL ) {
        printf("Error number: %d\n", errno);    
        printf("Msg: %s\n", strerror(errno ));
        return 0;    
    }

    Veiculo* v = (Veiculo*) calloc(1, 4 + 50 + 12);

    saveVeiculo(file, v);

    return 1;
}    