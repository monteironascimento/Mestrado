#include <stdio.h>

typedef struct{
   int hour, min, sec;
}Time; 

int createTime(int sec, Time *t){
   
    int resto = sec % 3600;
 
    t->hour = sec / 3600;
    t->min = resto / 60;
    t->sec = resto % 60;

    return 0;
};


int main(){

    Time t1;
   int resp1 = createTime(70000, &t1);
   printf("%d ", resp1);
   if (resp1 == 0)
      printf("%d:%d:%d\n",t1.hour, t1.min, t1.sec);
}


