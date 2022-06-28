#include "arvore_avl.h"


/**************************************
* DADOS
**************************************/

struct no{
  TipoElemento dado;
  int altura;
  struct no *esq, *dir;
};

No* avl_inserir(No *raiz, TipoElemento elemento){

    int res;
    if(*raiz == NULL){
        struct NO *novo;
        novo = (struct NO*) malloc(sizeof(struct NO));
        if(novo == NULL){
            return 0;
        }

        novo->dado = elemento;
        novo->altura = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        *raiz = novo;
        return 1;
    }

    struct No *atual = *raiz;
    if(valor < atual->data){
        if((res=avl_inserir(&(atual->esq), valor)) == 1){
            if(fatorBalanceamento_NO(atual) >= 2){
                if(valor < (*raiz)->esq->data){
                    rotacaoLL(raiz);
                }else{
                    rotacaoLR(raiz);
                }
            }
        }
    }else{
        if(valor > atual->data){
            if((res=avl_inserir(&(atual->dir), valor)) == 1){
                if(fatorBalanceamento_NO(atual) >= 2){
                    if((*raiz)->dir-data < valor){
                        RotacaoRR(raiz);
                    }else{
                        RotacaoRL(raiz);
                    }
                }
            }
        }else{
            print("Valor duplicado!!\n");
            return 0;
        }
    }
    atual->altura = ab_altura(raiz);

    return res;
};

bool ab_consulta(No* raiz, TipoElemento dado){
    return raiz==NULL? false : raiz->dado == dado || ab_consulta(raiz->esq, dado) || ab_consulta(raiz->dir, dado);
}

void ab_destruir(No **enderecoRaiz){
    if (*enderecoRaiz == NULL) return;

    ab_destruir(&(*enderecoRaiz)->esq);
    ab_destruir(&(*enderecoRaiz)->dir);
    No* no = *enderecoRaiz;
    free(no);

    *enderecoRaiz = NULL;
}

void ab_pre_ordem(No* raiz){
    if(raiz!=NULL){
        printf("%d ", raiz->dado);
        ab_em_ordem(raiz->esq);
        ab_em_ordem(raiz->dir);
    }
}

void ab_em_ordem(No* raiz){
    if(raiz!=NULL){
        ab_em_ordem(raiz->esq);
        printf("%d ", raiz->dado);
        ab_em_ordem(raiz->dir);
    }
}

void ab_pos_ordem(No* raiz){
    if(raiz!=NULL){
        ab_em_ordem(raiz->esq);
        ab_em_ordem(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

int ab_altura(No *raiz){
    if(raiz == NULL) return 0;

    int ab_altura_esq = ab_altura(raiz->esq);
    int ab_altura_dir = ab_altura(raiz->dir);
    return ab_altura_esq < ab_altura_dir ? ab_altura_dir + 1 : ab_altura_esq + 1;
}


int ab_total_vertices(No *raiz){
    return (raiz->esq == NULL && raiz->dir == NULL) ? 1 : ab_altura(raiz->esq) + ab_altura(raiz->dir);
}

void RotacaoLL(No *raiz){
    struct NO *no;
    no = (*raiz)->esq;
    (*raiz)->esq = no->dir;
    no->dir = *raiz;
    (*raiz)->altura = ab_altura(raiz);
    no->altura = ab_altura(raiz);
    *raiz = no;
};

void RotacaoRR(No *raiz){
    struct No *no;
    no = (*raiz)->dir;
    (*raiz)-> = no->esq;
    no->esq = (*raiz);
    (*raiz)->altura = ab_altura(raiz);
    no->altura = ab_altura(raiz);
    (*raiz) = no;
 }

 void RotacaoLR(No *raiz){
    RotacaoRR(&(*raiz)->esq);
    RotacaoLL(raiz);
 };

  void RotacaoRL(No *raiz){
    RotacaoLL(&(*raiz)->esq);
    RotacaoRR(raiz);
 };