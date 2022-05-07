#include <stdio.h>

#include "pilha.h"

void teste_transferir(){
    printf(">>> TESTE TRANSFERIR ATIVIDADE 01\n");
    Pilha* p = pilha_criar();
    pilha_empilhar(p, 10);
    pilha_empilhar(p, 20);
    pilha_empilhar(p, 30);
    pilha_empilhar(p, 40);
    pilha_empilhar(p, 50);
    pilha_imprimir(p);
    printf("\n");
    


    Pilha* pOrdena = pilha_criar();

    int elemento;
    pilha_desempilhar(p, &elemento);
    pilha_empilhar(pOrdena, elemento);
    printf("Removido: %d\n", elemento);

    pilha_desempilhar(p, &elemento);
    pilha_empilhar(pOrdena, elemento);
    printf("Removido: %d\n", elemento);

    pilha_desempilhar(p, &elemento);
    printf("Removido: %d\n", elemento);
    pilha_empilhar(pOrdena, elemento);

    pilha_desempilhar(p, &elemento);
    printf("Removido: %d\n", elemento);
    pilha_empilhar(pOrdena, elemento);

    int resultado = pilha_desempilhar(p, &elemento);
    pilha_empilhar(pOrdena, elemento);
    if (!resultado) printf("Pilha vazia\n");



    Pilha* p2 = pilha_criar();

    int elementop2;
    pilha_desempilhar(pOrdena, &elementop2);
    pilha_empilhar(p2, elementop2);
    printf("Removido: %d\n", elementop2);

    pilha_desempilhar(pOrdena, &elementop2);
    pilha_empilhar(p2, elementop2);
    printf("Removido: %d\n", elementop2);

    pilha_desempilhar(pOrdena, &elementop2);
    printf("Removido: %d\n", elementop2);
    pilha_empilhar(p2, elementop2);

    pilha_desempilhar(pOrdena, &elementop2);
    printf("Removido: %d\n", elementop2);
    pilha_empilhar(p2, elementop2);

    int resultadop = pilha_desempilhar(pOrdena, &elementop2);
    pilha_empilhar(p2, elementop2);
    if (!resultadop) printf("Pilha vazia\n");

    //pilha_inverter(p);
    pilha_imprimir(p2);

    pilha_destruir(p);
    pilha_destruir(pOrdena);
    pilha_destruir(p2);
}

int main(){
    teste_transferir();

}