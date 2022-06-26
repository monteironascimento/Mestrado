#include <stdlib.h>
#include <string.h>
#include "tabelahash.h"

struct Hash{
    int qtd, TABLE_SIZE;
    struct Aluno **itens;
};

Hash* criarHash(int tamanho_tabela){
    Hash* ha = (Hash*) malloc(sizeof(Hash));
    if(ha != NULL){
        int i;
        ha->TABLE_SIZE = tamanho_tabela;
        ha->itens = (struct Aluno**) malloc(tamanho_tabela * sizeof(struct Aluno*));
        if(ha->itens == NULL){
            free(ha);
            return NULL;
        }
        ha->qtd =0;
        for(i=0; i < ha->TABLE_SIZE; i++)
            ha->itens[i] = NULL;
    }
    return ha;
};

void liberarHash(Hash *ha){

    if(ha != NULL){
        int i;
        for(i=0; i< ha->TABLE_SIZE; i++){
            if(ha->itens[i] != NULL)
                free(ha->itens[i]);
        }
        free(ha->itens);
        free(ha);
    }
};

int valorString(char *str){

    int i, valor =7;
    int tam = strlen(str);
    for(i=0 ; i < tam; i++){
        valor = 31* valor + (int) str[i];
    }
    return valor;
};

int chaveDivisao(int chave, int TABLE_SIZE){
    return (chave & 0x7FFFFFFF) %TABLE_SIZE;
}

int chaveMultiplicacao(int chave, int TABLE_SIZE){
    float A = 0.61800339887;
    float val = chave * A;
    val = val - (int) val;
    return (int) (TABLE_SIZE * val);
}

int chaveDobra(int chave, int TABLE_SIZE){
    int num_bits = 10;
    int part1 = chave >> num_bits;
    int part2 = chave & (TABLE_SIZE - 1);
    return (part1 ^ part2);
};

int insereHash_SemColisao(Hash* ha, struct Aluno al){
    if(ha == NULL || ha->qtd == ha->TABLE_SIZE){
        return 0;
    }
    int chave = al.matricula;
    int pos = chaveDivisao(chave, ha->TABLE_SIZE);
    struct Aluno* novo;
    novo = (struct Aluno*) malloc(sizeof(struct Aluno));
    if(novo == NULL){
        return 0;
    }
    *novo = al;
    ha->itens[pos] = novo;
    ha->qtd++;

    return 1;
};

int buscarHash_SemColisao(Hash* ha,int mat, struct Aluno* al){

    if(ha == NULL){
        return 0;
    }

    int pos = chaveDivisao(mat, ha->TABLE_SIZE);
    if(ha->itens[pos] == NULL){
        return 0;
    }

    *al = *(ha->itens[pos]);

    return 1;

};

int insereHash_EnderAberto(Hash* ha, struct Aluno al){
    if(ha == NULL || ha->qtd == ha->TABLE_SIZE){
        return 0;
    }
    int chave = al.matricula;
    int i, pos, newPos;
    pos = chaveDivisao(chave, ha->TABLE_SIZE);
    for(i=0; i < ha->TABLE_SIZE; i++){
        newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        if(ha->itens[newPos] == NULL){
            struct Aluno* novo;
            novo = (struct Aluno*) malloc(sizeof(struct Aluno));
            if(novo == NULL){
                return 0;
            }
            *novo = al;
            ha->itens[newPos] = novo;
            ha->qtd++;
            return 1;
        }
    }

    return 0;
};

int buscaHash_EnderAberto(Hash* ha,int mat, struct Aluno* al){

    if(ha == NULL){
        return 0;
    }
    int i, pos, newPos;
    pos = chaveDivisao(mat, ha->TABLE_SIZE);
    for(i=0; i < ha ->TABLE_SIZE; i++){
        newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        if(ha->itens[newPos] == NULL){
            return 0;
        }
        if(ha->itens[newPos]->matricula == mat){
            *al = *(ha->itens[newPos]);
            return 1;
        }
    }

    return 0;
};

int sondagemLinear(int pos, int i, int TABLE_SIZE){
    return ((pos+1) & 0x7FFFFFFF) %TABLE_SIZE;
};

int sondagemQuadratica(int pos, int i, int TABLE_SIZE){
    pos = pos + 2*i + 5*i*i;
    return (pos & 0x7FFFFFFF) %TABLE_SIZE;
};

int duploHash(int H1, int chave, int i, int TABLE_SIZE){
    int H2 = chaveDivisao(chave, TABLE_SIZE-1) + 1;
    return ((H1 + i*H2) & 0x7FFFFFF) % TABLE_SIZE;
};