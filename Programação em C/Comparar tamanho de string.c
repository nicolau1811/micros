#include<stdio.h>

int main()
{
    char string_1[50], string_2[50], string_3[100];
    int t, a, b;

    printf("Insira a primeira string: ");
    gets(string_1);
    printf("\nInsira a segunda string: ");
    gets(string_2);
    t=jamaica(string_1);
    b=jamaica(string_2);

    int maioroumenor;
    for (int j=0; j < t; j++) //compara os caracteres
    {
        if(string_1[j] == '\0' && t < b) 
        {
            maioroumenor = 1;
            break;
        }
        if(string_1[j] > string_2[j]) 
        {
            maioroumenor = 2;
            break;
        }
        if(string_1[j] < string_2[j])
        {
            maioroumenor = 1;
            break;
        }
        maioroumenor = 0;
    }
    for (int i = 0; i < t; i++) //concatena as strings 1 e 2
    {
        string_3[i] = string_1[i];
    }
    for (int j = 0; j < b; j++)
    {
        string_3[t + j] = string_2[j];
    }

    string_3[t+ b] = string_2[b];
    printf("\nAs strings concatenadas ficaram assim: ");
    puts(string_3);
    printf("\nO tamanho da string e: %i", t+b);
    switch (maioroumenor)
    {
    case 0:
        printf("\nString_1 e igual a String_2.\n");
        break;
    case 1:
        printf("\nString_1 e maior que a String_2.");
        break;
    case 2:
        printf("\nString_1 e menor que a String_2.");
        break;
    }
    printf("\nAtividade 2 by Nicolas Maus da 4324.");
    return 0;
}
int jamaica(char str[]) //tamanho da string
{
    int n=0;
    for (int i = 0; i < 100; i++)
    {
        if (str[i] == '\0')
        {
            break;
        }
        n++;
    }
    return n;
}