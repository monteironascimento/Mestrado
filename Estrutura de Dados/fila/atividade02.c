#include <stdio.h>
#include <string.h>

#include "fila.h"
#include "pilha.h"

void inverter_fila(Fila* f, Pilha* p){

    TipoElemento elemento;
    int tamf1 = fila_tamanho(f);

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        fila_remover(f, &elemento);
        if(elemento > 0){
            pilha_empilhar(p, elemento);
        }
    }
    
    Pilha* p1 = pilha_criar();

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        pilha_desempilhar(p, &elemento);
        if(elemento > 0){
           
            pilha_empilhar(p1, elemento);
        }
    }

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        pilha_desempilhar(p1, &elemento);
        if(elemento > 0){
           
            fila_inserir(f, elemento);
        }
    }

}

int main(){

    printf("\n");

    printf("OLA MUNDO");

      /**************************************
    * Teste insercao e primeiro
    **************************************/
    Fila* f = fila_criar();
    fila_inserir(f, 10);
    fila_inserir(f, 20);
    fila_inserir(f, 30);

    Pilha* p = pilha_criar();

    inverter_fila(f, p);
    fila_imprimir(f);

    printf("\n");
    return 0;
}
