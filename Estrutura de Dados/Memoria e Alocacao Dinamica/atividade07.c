#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned int codigo;
    char nome[50];
    float* p_notas;
} Aluno;


void criarAluno(Aluno* aluno, int codigo, char nome[], float* notas){

    aluno->codigo = codigo;
    strcpy(aluno->nome, nome);
    aluno->p_notas = notas;
    aluno->p_notas[0] = 10.2;
    aluno->p_notas[1] = 20.5;
    aluno->p_notas[2] = 98.9;

};

void imprimirAluno(Aluno* aluno, int qtNotas){
    
    printf("\n");
    printf("------- ALUNO --------\n");

    printf("Código: %d\n", aluno->codigo);
    printf("Código: %s\n", aluno->nome);

    for (int i = 0; i < qtNotas; i++)
    {
        printf("Nota: %f\n", *(aluno->p_notas + i)  );    
    }
    
};


    

int main(){

    //Dados    
    int codigo = 10;
    char nome[] = "RODRIGO";
    int qtNotas = 3;
    float* notas = (float*) calloc(qtNotas, sizeof(float));
    //Ponteiro de Aluno alocar memoria
    Aluno* pAluno = (Aluno*) malloc(sizeof(Aluno));

    criarAluno(pAluno, codigo, nome, notas);
    imprimirAluno(pAluno, qtNotas);
}    