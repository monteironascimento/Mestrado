#include <stdio.h>

int K_esimoDigito(int n, int k){

    if (k <= 0){
        
        return -1;
    }
 
    while ((k - 1) > 0 && n > 0){
        n = n / 10;
        k--;
    }
 
    if (n == 0){
        return -1;
    }else{
        return(n % 10);
    }

    return -1;

};


int main(){

    printf("%d \n", K_esimoDigito(2843, 3));

    printf("%d \n", K_esimoDigito(2843, 4));

    printf("%d \n", K_esimoDigito(2843, 5));
    return 0;
}
