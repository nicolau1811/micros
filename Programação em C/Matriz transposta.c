#include <stdio.h>

int main(){

    int a[5][5], b[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nInsira o numero para a[%i][%i]\n", i, j);
            scanf("%i", &a[i][j]);
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           b[i][j]=a[j][i];
        }
    }
    
    printf("\nMatriz original:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           printf("[%i][%i] = %i      ", i, j, a[i][j]);
        }
        printf("\n\n");
        
    }

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           printf("[%i][%i] = %i      ", i, j, b[i][j]);
        }
    printf("\n\n");
        
    }
    printf("\n by Nicolas Maus da 4324.");
}