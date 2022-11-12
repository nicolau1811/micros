#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fp;
    int i, ouricodomar[80], ouricoapenas = 0, renan;
    char str[80], str1[80], ouricoterrestre[80], c;
    
    fp=fopen("string.tx_","w+t");
    printf("\nInsira uma frase de ate 80 caracteres: ");
    gets(str);
    fputs(str, fp);//A
    fprintf(fp, "\n");//B

    strcpy(str1, str);
    int naner=tamanho(str1);
    for (i = 0; i < naner/2; i++)
    {
        char b=str1[i];
        str1[i]=str1[naner-i-1];
        str1[naner-i-1]=b;
    }
    fputs(str1, fp);//C
    fprintf(fp, "\n");//D

    for (i = 0; str[i] != '\0'; i++)//E
    {
        if (str[i]==' ')
        {
            fprintf(fp, "\n");
        }else
        {
            fprintf(fp, "%c", str[i]);
        }
    }
    fprintf(fp, "\n");//F

    for (i = 0; str[i] != '\0'; i++)//G
    {
        fprintf(fp, "%c\n", str[i]);
    }
    fprintf(fp, "\n");//H

    for (i = 0; str[i] != '\0'; i++)//I
    {
        if (str[i]==' ')
        {
            continue;
        }
        renan=0;
        for (int j = 0; j < ouricoapenas; j++)
        {
            if (ouricoterrestre[j]==str[i])
            {
                ouricodomar[j]++;
                renan=1;
                break;
            }
            
        }

        if (renan!=1)
        {
            ouricoterrestre[ouricoapenas]=str[i];
            ouricodomar[ouricoapenas]=1;
            ouricoapenas++;
        }
    }
    
    for (i = 0; i < ouricoapenas; i++)
    {
        fprintf(fp, "%c apareceu %i\n", ouricoterrestre[i], ouricodomar[i]);
    }
    
    fclose(fp);
    fp=fopen("string.tx_","rt");
    
    do
    {
        c = fgetc(fp);
        printf("%c", c);
    }   
    while (!feof(fp));

    printf("\nby Nicolau da 4324");
    fclose(fp);
}

int tamanho(char str1[]){ //retorna o tamanho da string
    int t=0;
    for (int a=0;a<80;a++)
    {
        if (str1[a] == '\0')
        break;
        t++;  
    }
    return t;
}