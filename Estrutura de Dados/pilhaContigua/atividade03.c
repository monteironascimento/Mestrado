#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "pilha.h"

void verificarExpressao(char frase[]){

    int elemento;
    int correto = 0;
    Pilha* pParemtese = pilha_criar();
    Pilha* pColchetes = pilha_criar();
    Pilha* pChaves = pilha_criar();
    
    for(int i = 0; i < strlen(frase); i++){

        if(frase[i] == '('){
            pilha_empilhar(pParemtese, 10);
        }else if(frase[i] == ')'){
            pilha_desempilhar(pParemtese, &elemento);
        }else if(frase[i] == '['){            
            pilha_empilhar(pColchetes, 10);
        }else if(frase[i] == ']'){
            pilha_desempilhar(pColchetes, &elemento);
        }else if(frase[i] == '{'){            
            pilha_empilhar(pChaves, 10);
        }else if(frase[i] == '}'){
            pilha_desempilhar(pChaves, &elemento);
        }            

    }

    int pilhaParemtese = pilha_vazia(pParemtese);
    int pilhaColchetes = pilha_vazia(pColchetes);
    int pilhaChaves = pilha_vazia(pChaves);
    
    if(pilhaParemtese && pilhaColchetes && pilhaChaves){
        correto = 1;
    }

    if(correto){
        printf("Correto: %s", frase);
    }else{
        printf("Incorreto: %s", frase);
    }
}

int main(){
   // char frase[]="3)(3 - (3*(3+0)+(3-3)+0)*9(0+9(-4";
   // verificarExpressao(frase);
    FILE* file = fopen ("atividade03.txt", "r");
    char frase[100];
    int  fraseQtd = 0;   

    char c = fgetc(file);
    while(feof(file)==0) {
        
        c = fgetc(file);
       
        frase[fraseQtd++] = c;

        if(c == '\n'){
           
            verificarExpressao(frase);
            
            for(int i = 0; i < strlen(frase); i++){
                frase[i] = NULL;
            }
            fraseQtd = 0;
            //printf("\n");
        }
        
    }

    verificarExpressao(frase);

    fclose(file);

}