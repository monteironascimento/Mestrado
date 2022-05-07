#include <stdio.h>

void troca (int *x, int *y){ 
   int temp = *x; 
   *x = *y; 
   *y = temp; 

   return;
}

void permuta(int *a, int *b, int *c){

    if(*a > *b){
    
        if(*b > *c){
    
            if(*a > *c){
                troca(a, c);
            }else{
                troca(b, c);
            }
        }else{
            
            if(*a > *c){
                troca(a,c);
                troca(a,b);
            }else{                
                troca(a, b);
            }
        }
    }else{

        if(*b > *c){

            if(*a > *c){
                troca(c, a);
                troca(b, c);
            }else{
                troca(b, c);
            }
        }else{
            
        }
    }

    return;
}


int main(){

    int a,b,c;

 
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
  
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
  
    printf("Digite o segundo valor: ");
    scanf("%d", &c);
 
    printf("Voce digitou os valo    res na seguinte ordem: %d e %d e %d\n", a, b, c);

    permuta(&a, &b, &c);

    printf("Ordem final na seguinte ordem: %d e %d e %d\n", a, b, c);

    
    return 0;
}
