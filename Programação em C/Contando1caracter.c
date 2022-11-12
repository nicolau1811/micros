#include<stdio.h>

int main()
{
    char string[100], escolha;
    int b=0;

    printf("Insira uma frase:\n");
    gets(string);
    printf("\nInsira o caracter que deseja contar:\n");
    scanf("%c", &escolha);

    for (int a = 0; a < 100; a++)
    {

        if (string[a]=='\0')
        {
            break;
        }

        if (string[a]==escolha) 
        {
            b++;
        }
       
    } 
    printf("\nQuantidade de %c: %i", escolha, b);
    printf("\nAtividade by Nicolas Maus da 4324.\n");
    return 0;
}
