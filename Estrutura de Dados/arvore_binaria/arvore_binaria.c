#include "arvore_binaria.h"


/**************************************
* DADOS
**************************************/

struct no{
  TipoElemento dado;
  struct no *esq, *dir;
};

/**************************************
* FUNÇÕES AUXILIARES
**************************************/


/**************************************
* IMPLEMENTAÇÃO
**************************************/

void ab_destruir(No **enderecoRaiz){
    return;
}

bool ab_inserir(No **enderecoRaiz, TipoElemento elemento){
    return false;
}

bool ab_remover(No** enderecoRaiz, TipoElemento dado){
    return false;
}

void ab_pre_ordem(No* raiz){
    return;
}

void ab_em_ordem(No* raiz){
    return;
}

void ab_pos_ordem(No* raiz){
    return;
}

int ab_altura(No *raiz){
    return 0;
}

int ab_total_vertices(No *raiz){
	return 0;
}

bool ab_consulta(No* raiz, TipoElemento dado){
	return false;
}