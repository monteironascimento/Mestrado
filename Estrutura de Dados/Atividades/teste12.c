#include <stdio.h>

typedef struct{
   int hour, min, sec;
}Time; 

int secondsFromTime(Time *t){

    if(t == NULL){
        return -1;
    }

    int segundosHoras       = t->hour * 3600;
    int segundosMinutos     = t->min * 60;
    int segundonsSegundos   = t->sec;

    int sucesso = segundosHoras + segundosMinutos + segundonsSegundos;

    return sucesso;

};

int main(){

  Time t1 = {10, 20, 49};
  printf("%d\n",secondsFromTime(&t1));

}


