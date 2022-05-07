#include <stdio.h>

int main (){

    int n  = 0;
  
    do{

        printf("Informe o um numero primo maior que >= 2 e <= 3:  \t");    
        scanf("%d", &n);

    }while(n != 2 & n != 3);

    int mat[2][2] = { {0,0},  {0,0} };

    if(n == 3){
        int mattres[3][3] = { {0,0},  {0,0},  {0,0} };

        for (int i = 0; i < 3; i++)
        {
            for (int y = 0; y < 3; y++)
            {
                printf("Informe o valor da matriz : %d ou %d: \t", i, y);    
                scanf("%d", &mattres[i][y]);
            }
        }

        int ic = 0;
        int yc = 0;
        for (int i = 0; i < 3; i++)
        {
                
            for (int y = 0; y < 3; y++)
            {
                if(i != 0 & y != 1){
                    mat[ic][yc] = mattres[i][y];                        
                    yc++;
                }
            }
            if(i > 0){
                ic ++;
                yc = 0;
            }
        }

    }else{
        
        for (int i = 0; i < 2; i++)
        {
            for (int y = 0; y < 2; y++)
            {
                printf("Informe o valor da matriz : %d ou %d: \t", i, y);    
                scanf("%d", &mat[i][y]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\n");    
        for (int y = 0; y < 2; y++)
        {
            printf("%d,", mat[i][y]);    
               
        }
    }

    printf("\n\n");

    int res = (mat[0][0]) * (mat[1][1]) - (mat[1][0]) * (mat[0][1]);
    printf("Resultado %d  \t", res);


    return 0;
}