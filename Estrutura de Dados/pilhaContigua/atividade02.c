#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pilha.h"

void inverter_palavra(char frase[]){
    printf("Frase: %s ", frase);

    printf("\n");
    Pilha* p = pilha_criar();
    for(int i = 0 ; i <= strlen(frase); i++){

        if (frase[i] == ' '){
            //pilha_imprimir(p);
            int elementop2;
            int resultadop = pilha_desempilhar(p, &elementop2);
            while(resultadop){
                printf("%c", elementop2);
                resultadop = pilha_desempilhar(p, &elementop2);
            }

            pilha_destruir(p);
            p = pilha_criar();
            printf("%c", ' ');
        }else if (frase[i] == '.'){
            
            int elementop2;
            int resultadop = pilha_desempilhar(p, &elementop2);
            while(resultadop){
                printf("%c", elementop2);
                resultadop = pilha_desempilhar(p, &elementop2);
            }
            printf("%c", '.');
            pilha_destruir(p);
            break;
        }else{
            pilha_empilhar(p, (char) frase[i]);
        }

    }

    printf("\n");

}



int main(){
    char frase[]="MESTRADO EM CIENCIA DA COMPUTACAO.";
    inverter_palavra(frase);
}