#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fp;
    char nome[50], str1[100];
    char ch;
    printf("Adicione um nome ao arquivo que deseja criar.\n");
    gets(nome);
    fp=fopen(strcat(nome,".txt"),"wt");
    printf("\nInsira uma frase que deseja inverter: ");
    gets(str1);
    int i;
    int naner=tamanho(str1);
    for (i = 0; i < naner/2; i++)
    {
        char b=str1[i];
        str1[i]=str1[naner-i-1];
        str1[naner-i-1]=b;
    }
    printf("\nby Nicolau da 4324");
    fputs(str1, fp);
    fclose(fp);
}

int tamanho(char str1[]){ //retorna o tamanho da string
    int t=0;
    for (int a=0;a<100;a++)
    {
        if (str1[a] == '\0')
        break;
        t++;  
    }
    return t;
}