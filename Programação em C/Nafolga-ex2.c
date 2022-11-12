#include<stdio.h>

int main()
{
    char str1[50], str2[50];

    printf("Entre com uma string de no maximo 49 caracteres:\n");
    gets(str1);
    copia(str1, str2);
    printf("\nFeito por Nicolas Maus da 4324.");
}

void copia(char str1[], char str2[])
{
    for (int i = 0; i < 50; i++)
    {
        str2[i]=str1[i];
        if (str1[i]=='\0') break;
    }
    printf("\nA string 2 ficou assim: %s", str2);
}