#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fp;
    char nome[50], s[30];
    printf("Adicione um nome ao arquivo que deseja criar.\n");
    gets(nome);
    fp=fopen(strcat(nome,".txt"),"wt");
    printf("\nInsira uma frase: ");
    gets(s);
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i]==' ')
        {
            fprintf(fp, "\n");
        }else
        {
            fprintf(fp, "%c", s[i]);
        }
    }
    printf("\nby Nicolau da 4324");
    fclose(fp);
}