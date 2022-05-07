#include <stdio.h>

int swapLines(int *m, int lines, int columns, int i1, int i2){


    if(lines < i1){
        return 1;
    }

    int columInit = 0;
    int columInitb = 0;

    
        if(i1 == 0){
           columInit = 0; 
           columInitb = (i2 - 1) * columns; 
        }else{
           columInit = (i1 - 1) * columns;
           columInitb = (i1 - 1) * columns;

            for (int i = 0; i < columns; i++)
            {
               

            int com = * ( m + (i1 * columInit) + i);
            * ( m + (i1 * columInit) + i) = * ( m + (i2 * columInitb) + i);
            * ( m + (i2 * columInitb) + i) = com;
            }
            
            return 0;
        }

    for (int i = 0; i < columns; i++)
    {
       

       int com = * ( m + (i1 * columInit) + i);
       * ( m + (i1 * columInit) + i) = * ( m + (i2 * columInitb) + i);
       * ( m + (i2 * columInitb) + i) = com;
    }
    
    return 0;

};



int main(){

    int m[4][4] = {{1,1,1,1},
        {1,2,3,4},
        {1,2,3,4},
        {2,2,2,2}

    };

    swapLines((int*)m, 4, 4, 0, 2);

    for (int i=0; i< 4; i++){
        for (int j=0; j<4; j++){
            printf("%d ", m[i][j]);
        }
    }
}