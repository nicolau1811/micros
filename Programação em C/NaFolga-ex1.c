#include<stdio.h>

int main()
{
    char palavra[50];
    int p;
    int b=0;

    printf("Entre com uma palavra:\n");
    gets(palavra);

    for ( p = 0; p < 50; p++)
    {
        if (palavra[p]=='\0') break;
        for (int a = 0; a < 50; a++)
        {
            if (a>b) break;
            if (palavra[b] == '\0') break;
            printf("%c", palavra[a]);
        }
        printf("\n");
        b++;
    }
    printf("\nFeito por Nicolas Maus da 4324.");
    return 0;
}