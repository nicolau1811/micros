#include <stdio.h>

int main(){

    int matriz[6][6], vetor[36], cont=0;
    

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("\nInsira o numero para matriz[%i][%i]\n", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
        vetor[cont]=matriz[i][j];
        cont++;
        }
    }

    for (int i = 0; i < 36; i++)
    {
        if (vetor[0]>vetor[1])
        {
            int aux = vetor[1];
            vetor[1] = vetor[0];
            vetor[0] = aux;
        }
        if (vetor[i+1]<vetor[i])
        {
            int temp = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = temp;
            i=0;
        }
    }
    
    for (int i = 0, n=0, m=0; i < 36; i++, m++)
    {
        if (m>5)
        {
            m=0;
            n++;
        }
        matriz[n][m]=vetor[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("matriz[%i][%i] = %i\t", i, j, matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nby Nicolau da 4324");

}