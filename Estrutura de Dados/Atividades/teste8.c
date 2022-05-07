#include <stdio.h>

int swapColumns(int *m, int lines, int columns, int j1, int j2) {

    for (int i = 0; i < lines; i++)
    {
        int com = * ( m + ( i * columns) +j1 );

        * ( m + ( i * columns) +j1 ) = * ( m + ( i * columns) +j2 );
        * ( m + ( i * columns) +j2 ) = com;
        
    } 
    return 0;
};



int main(){

    int n[10][10] = {{0,1,2,3,4,5,6,7,8,9},
		 {0,1,2,3,4,5,6,7,8,9},
	     {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9},
	 	 {0,1,2,3,4,5,6,7,8,9}};

    swapColumns((int*)n, 10, 10, 2, 3);

    for (int i=0; i< 10; i++){
        for (int j=0; j<10; j++){
            printf("%d ", n[i][j]);
        }
    }

}