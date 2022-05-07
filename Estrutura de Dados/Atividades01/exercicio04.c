#include <stdio.h>
#include <string.h>

int main (){

    char letra = 'a';

    do{

        char s1[20];
        char s2[20];

        if(letra == 'a' || letra == 'A'){

            printf("\n\n Letra A ---------------------- \n\n");
            printf("Informe o valor de s1: ");
            scanf("%s", s1);
            letra = 'b';

        }else if (letra == 'b' || letra == 'B'){

            printf("\n\n Letra B ---------------------- \n\n");    
            int tamanhos1 = strlen(s1);
            printf("O Tamanho de S1 é de : %d", tamanhos1);
            letra = 'c';

        }else if (letra == 'c' || letra == 'C'){

            printf("\n\n Letra C ---------------------- \n\n");

            
            printf("Informe o valor de s2: ");
            scanf("%s", s2);

            int resultado = strcmp(s1, s2);

            if(resultado == 0){
                printf("As duas palavras digitadas são iguais \n");
            }else{
                printf("As duas palavras digitadas são diferentes \n");
            }
            letra = 'd';

        }else if (letra == 'd' || letra == 'D'){

            printf("\n\n Letra D ---------------------- \n\n");

            char s1concat[100] = ""; 
            strcpy(s1concat, s1);
            strcat(s1concat, s2);
            printf("frase concatenada: %s", &s1concat[0]);

             printf("\n");
            letra = 'e';

        }else if (letra == 'e' || letra == 'E'){

            printf("\n\n Letra E ---------------------- \n\n");

            char s1reverse[20] = ""; 

            int posic = 0;
            for (int i = strlen(s1); i > 0; i--)
            {
                s1reverse[posic++] = s1[i - 1];   
            }

            printf("frase s1 %s reverse: %s \n", &s1[0], &s1reverse[0]);
            letra = 'f';

        }else if (letra == 'f' || letra == 'F'){

            printf("\n\n Letra F ---------------------- \n\n");

            char s1pesquisa[1];
            printf("Informe o valor para pesquisa em  s1: ");
            scanf("%s", s1pesquisa);

            int contaCaractere = 0;
            for(int y=20; y > 0; y--){

                if(s1[y] == s1pesquisa[0]){
                    contaCaractere++;
                }
            }

            printf("A string s1 contem %d  \n",  contaCaractere);
            letra = 'g';

        }else if (letra == 'g' || letra == 'G'){

            printf("\n\n Letra G ---------------------- \n\n");

            char c1 ;
            printf("Informe o valor de c1: ");
            scanf(" %c", &c1);
        
            char c2 ;
            printf("Informe o valor de c2: ");
            scanf(" %c", &c2);

            char s1Substituida[20] ;

            for(int y=0; y <= strlen(s1); y++){

                char comp = s1[y];

                if(comp == c1){
                    s1Substituida[y] = c2;
                }else{
                    s1Substituida[y] = s1[y];
                }
            }

            printf("String s1, tera um novo valor %s \n", &s1Substituida[0]);
            letra = 'h';

        }else if (letra == 'h' || letra == 'H'){


            printf("\n\n Letra H ---------------------- \n\n");

            char subs2[20] ={0} ;
            printf("Informe o valor da substring s2: ");
            scanf(" %s", subs2);

            int s2_lenght = strlen(subs2);
            int substring = 0;
            for (int i = 0 ; i <= strlen(s1); i++)
            {
                char comp1 = s1[i];
                char comp2 = subs2[substring];
                
                if(substring != s2_lenght ){
                    if(comp1 == comp2){
                        substring++;
                    }else{
                        substring = 0;    
                    }
                }
            }

            if(s2_lenght == substring){
                printf("String s2, é substring de s1");
            }else{
                printf("String s2, não é substring de s1");
            }
        
            letra = 'i';    

        }else if (letra == 'i' || letra == 'I'){

            printf("\n\n Letra I ---------------------- \n\n");

            int posic_inicial = 0;
            printf("Informe a posicao inicial 0..18 : ");
            scanf(" %d", &posic_inicial);

            int posic_fina = 1;
            printf("Informe a posicao inicial 1..18 : ");
            scanf(" %d", &posic_fina);

            char news1[20] = {0};
            int newString = 0;
            for (int i = 0 ; i <= strlen(s1); i++)
            {
               
                if(i >= posic_inicial & i <= posic_fina){
                    news1[newString++] = s1[i];
                }
            }
  
            printf("A Substring de s1 tera um novo valor de %s \n", &news1[0]);

            letra = 'x';
        }

    }while(letra != 'x');

    return 0;
}