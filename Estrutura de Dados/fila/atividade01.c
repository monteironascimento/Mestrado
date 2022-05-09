#include <stdio.h>
#include <string.h>

#include "fila.h"

Fila* concatenaFila(Fila* f1, Fila* f2){

    TipoElemento elemento;

    Fila* f3 = fila_criar();

    int tamf1 = fila_tamanho(f1);

    for (int i = 0; i < tamf1; i++)
    {
        elemento = 0;
        fila_remover(f1, &elemento);
        if(elemento > 0){
            fila_inserir(f3, elemento);
        }

        elemento = 0;
        fila_remover(f2, &elemento);
        if(elemento > 0){
            fila_inserir(f3, elemento);
        }
            
    }

    return f3;
}

int main(){

    TipoElemento elemento;
      /**************************************
    * Teste insercao e primeiro
    **************************************/
    Fila* f1 = fila_criar();
    fila_inserir(f1, 10);
    fila_inserir(f1, 20);
    fila_inserir(f1, 30);
    
    Fila* f2 = fila_criar();
    fila_inserir(f2, 15);
    fila_inserir(f2, 25);
    fila_inserir(f2, 35);
    
    Fila* f3 = concatenaFila(f1, f2);

    fila_imprimir(f3);

}
