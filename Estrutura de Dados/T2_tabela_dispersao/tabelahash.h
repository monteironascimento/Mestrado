#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct Hash Hash;

Hash* criarHash(int tamanho_tabela);

void liberarHash(Hash *h);

int valorString(char *str);

int chaveDivisao(int chave, int TABLE_SIZE);

int chaveMultiplicacao(int chave, int TABLE_SIZE);

int chaveDobra(int chave, int TABLE_SIZE);

int insereHash_SemColisao(Hash* ha, struct Aluno al);

int buscarHash_SemColisao(Hash* ha,int mat, struct Aluno* al);

int insereHash_EnderAberto(Hash* ha, struct Aluno al);

int buscaHash_EnderAberto(Hash* ha,int mat, struct Aluno* al);

int sondagemLinear(int pos, int i, int TABLE_SIZE);

int sondagemQuadratica(int pos, int i, int TABLE_SIZE);

int duploHash(int H1, int chave, int i, int TABLE_SIZE);