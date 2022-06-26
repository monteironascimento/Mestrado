#include <stdio.h>
#include <string.h>
#include <time.h>
#include "tabelahash.h"

Hash* ha;

int main(int argc, char *argv[]){
	
	//tamanho deve utilizar numeros primos
	//evitar potencia de dois.
	

	//sem colisao 
	struct aluno al = (struct aluno*) malloc(sizeof(struct aluno));
	int x = insereHash_SemColisao(ha, al);
	int x = buscarHash_SemColisao(ha, mat, &al);

	int x = insereHash_EnderAberto(ha, al);
	int x = buscaHash_EnderAberto(ha, mat, &al);

	//com colisao

	liberarHash(ha);
	return 0;
}

