#include "arvore_binaria.h"


/**************************************
* DADOS
**************************************/

struct no{
  TipoElemento dado;
  int altura;
  struct no *esq, *dir;
};

/**************************************
* FUNÇÕES AUXILIARES
**************************************/

int altura(No *no){
    if (no == NULL)
        return 0;
    return no->altura;
}

int fator_balanceamento(No *no){
    return labs(altura(no->esq) - altura(no->dir));
}

No* novoNo(TipoElemento valor){
    No* novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->esq = novo->dir = NULL;
    novo->altura = 1;
    return novo;
}


No* rotacao_direita(No *raiz){
    printf("%s\n", "rotacao_direita");   
    return raiz;
}

No* rotacao_esquerda(No *raiz){
    printf("%s\n", "rotacao_esquerda");
    return raiz;
}

No* rotacao_dupla_direita(No *raiz){
    printf("%s\n", "rotacao_dupla_direita");
    return raiz;
}

No* rotacao_dupla_esquerda(No *raiz){
    printf("%s\n", "rotacao_dupla_esquerda");
    return raiz;
}

/**************************************
* IMPLEMENTAÇÃO
**************************************/

No* ab_inserir_avl(No *raiz, TipoElemento elemento){
    return raiz;
}
