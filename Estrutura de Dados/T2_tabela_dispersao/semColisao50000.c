#include <stdio.h>
#include <time.h>
#include <string.h>

#include "tabelahash.h"

Hash* ha;

char nome[] = "Rodrigo Monteiro";

int main(){

    clock_t t;
    t = clock(); 

    int qtVezes = 50000;

    ha = criarHash(qtVezes);

    for (int i = 0; i < qtVezes; i++)
    {
        struct Aluno al;
        al.matricula = i;
        strcpy(al.nome, nome);
        al.n1 = 9.5;
        al.n2 = 10;
        al.n3 = 6;
        insereHash_SemColisao(ha, al);
    }

    for (int i = 0; i < qtVezes; i++)
    {
        struct Aluno al;
        al.matricula = i;
        strcpy(al.nome, nome);
        al.n1 = 9.5;
        al.n2 = 10;
        al.n3 = 6;
        insereHash_SemColisao(ha, al);
    }

    for (int i = 0; i < qtVezes; i++)
    {
        struct Aluno al;
        al.matricula = i;
        buscarHash_SemColisao(ha, i, &al);
    }

    liberarHash(ha);

    t = clock() - t; 
    printf("\nTempo de execucao: %lf\n\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 


}

