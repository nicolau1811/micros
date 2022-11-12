#include <stdio.h>

int main(){

    int a[6][6], coluna[6], linha[6];

    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("\nInsira o numero para a[%i][%i]\n", i, j);
            scanf("%i", &a[i][j]);
        }
        
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j==0)
            {
                linha[i]=0;
            }
            
            linha[i] += a[i][j];

            
            if (j==0)
            {
                coluna[i]=0;
            }
                
            coluna[i] += a[j][i];
            
        }
    }
    
    for (int i = 0; i < 6; i++)
    {  
    printf("\nValor da coluna %i: %i", i, coluna[i]);          
    }

    for (int i = 0; i < 6; i++)
    {  
    printf("\nValor da linha %i: %i", i, linha[i]);          
    }
    printf("\nNome: Nicolas Maus Krysnki Nunes");
    printf("\nTurma: 4324");
    
}