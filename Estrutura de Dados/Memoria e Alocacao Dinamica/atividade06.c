#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned int codigo;
    char nome[50];
    float preco;
} Produto;


Produto* itemA(int codigo, char nome[], float preco){

    Produto* v = (Produto*) calloc(3, 4 + 50 + 12);
    v->codigo   = codigo;
    strcpy(v->nome, nome);
    v->preco    = preco;

    return v;

};

void itemB(Produto* prod){
    
    printf("\n");
    printf("------- PRODUTOR --------\n");

    printf("Código: %d\n", prod->codigo);
    printf("Código: %s\n", prod->nome);
    printf("Código: %f\n", prod->preco);
    
};

int main(){
    
    int codigo     = 20;
    char nome[] = "ARROBA";
    float preco     = 20.2;

    Produto *prod = itemA(codigo, nome, 10.2);
    itemB(prod);

    return 0;
}


