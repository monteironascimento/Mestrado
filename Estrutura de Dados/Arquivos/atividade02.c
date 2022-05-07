#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(){

    FILE* file = fopen ("atividade02.txt", "r+");
    FILE* file2 = fopen ("atividade02.txt", "r+");
    if(file == NULL ) {
        printf("Error number: %d\n", errno);    
        printf("Msg: %s\n", strerror(errno ));
        return 0;    
    }

    int contador = 0;
    char c = fgetc(file);
    while(feof(file)==0) {

        if(c >= 97 && c <= 122){
            
            int posic = ftell(file);
            c -= 32;
            printf("\ndepois %c", c);
            fputc(c, file2);
        }else{
            fputc(c, file2);
        }
        
        c = fgetc(file);

    }

    fclose(file);
    fclose(file2);
  
    return 1;
   
}    