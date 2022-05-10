#include <stdio.h>
#include <string.h>

#include "fila.h"
#include "pilha.h"

void inverter_fila(Fila* f){

    Pilha* p = pilha_criar();

    TipoElemento elemento;
    int tamf1 = fila_tamanho(f);

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        fila_remover(f, &elemento);
        if(elemento > 0){
            pilha_empilhar(p, elemento);
        }
    }

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        pilha_desempilhar(p, &elemento);
        if(elemento > 0){
           
            fila_inserir(f, elemento);
        }
    }
}

void trata_cadeia(char frase[]){

    TipoElemento elemento;
    Fila* f_numero = fila_criar();
    Fila* f_letra = fila_criar();
    Fila* f_final = fila_criar();

    for (int i = 0; i < strlen(frase); i++)
    {
        if(frase[i] != ' '){
            if(frase[i] == '1'){

            }else if(frase[i] == '2'|| frase[i] == '3' || frase[i] == '4' ||
                        frase[i] == '5' || frase[i] == '6' || frase[i] == '7' || 
                        frase[i] == '8' || frase[i] == '9' || frase[i] == '0'){
                fila_inserir(f_numero, (char) frase[i]);
            }else{
                fila_inserir(f_letra, (char) frase[i]);
            }
        }
    }

    inverter_fila(f_numero);

    int tamf1 = fila_tamanho(f_letra);

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        fila_remover(f_letra, &elemento);
        
        fila_inserir(f_final, (char) elemento);
    }

    tamf1 = fila_tamanho(f_numero);

    for (int i = 0; i < tamf1; i++){
        elemento = 0;
        fila_remover(f_numero, &elemento);
        
        fila_inserir(f_final, (char) elemento);
    }

    fila_imprimir_char(f_final);

}

int main(){

    printf("\n");

    char frase[] = "M 1 E 5 T 7 R 8 A 8 D 8 O";

    trata_cadeia(frase);

    char frase2[] = "C 9 H 4 Q 6";

    trata_cadeia(frase2);

    printf("\n\n");
    return 0;
}
