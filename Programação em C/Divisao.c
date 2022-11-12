#include <stdio.h>
#include <stdlib.h>
int main()
{
   int menor, maior, variavel, div2, div3, x;
   do
   {
      printf("\nInsira o menor numero:\n");
      scanf("%i", &menor);
      printf("\nInsira o maior numero:\n");
      scanf("%i", &maior); 

      variavel=maior-menor;
      div2=variavel/2;
      div3=variavel/3;

        if (menor>maior)
        {
       printf("\nErro\n");
        }
        else
        {
        printf("\nA diferença do maior pro menor %i", variavel);
        }
        if (variavel %2 ==0 && variavel %3 ==0)
        {
            printf("\nO numeor %i e divisivel %i vezes por 2 e %i por tres.\n", variavel, div2, div3);
        }
        else
        {
            if(variavel %2 == 0 || variavel %3 == 0)
            {
                if (variavel %2 == 0)
                {
                    printf("\nO numeor %i e divisivel %i vezes por 2.\n", variavel, div2);
                    printf("\nO numeor %i nao e divisivel por 3.\n", variavel);
                }
                else
                {
                    printf("\nO numeor %i nao e divisivel por 2.\n", variavel);
                    printf("\n\nO numeor %i e divisivel %i vezes por 3", variavel, div3);
                }
            }
            else
            {
                printf("\nO numero %i nao e divisivel por nenhum dos dois.\n", variavel);
            } 
        }
    do
    {
        printf("\nPara continuar digite 1:\n");
        scanf("%i", &x);
        if (x!=1)
        {
            printf("\nErro\n");
        }
    
    } 
   while (x==1);
   system("pause");
    }
while (x==1);
return 0;
}