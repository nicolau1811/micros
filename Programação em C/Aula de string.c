#include<stdio.h>

void main()
{
    char s[30];

    printf("Insira uma string de no max 30 caracteres:  ");
    gets(s);

    for (int a = 0; a <= 30; a++)
    {
        if (s[a] == '\0')
        {
            break;
        }
        if (s[a] == ' ')
        {
           printf("\n");
        }
        else
        {
            printf("%c", s[a]);
        }
    } 
    printf("\nAtividade 3 by Nícolas Maus da 4324.");
}