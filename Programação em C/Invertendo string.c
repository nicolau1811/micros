#include<stdio.h> 

int main(){
       char string[100];

       printf("Insira uma string com ate 100 caracteres:\n");
       gets(string);
       printf("\nA string inserida foi: %s\n", string);
       itovi(string);
       return 0;
}
int tamanho(char str[]){ //retorna o tamanho da string
       int t=0;
       for (int a=0;a<100;a++)
      {
            if (str[a] == '\0')
            break;
            t++;  
      }
      return t;
}
void itovi(char str[]){ //inverte a string
       int i;
       int naner=tamanho(str);
       for (i = 0; i < naner/2; i++)
       {
              char b=str[i];
              str[i]=str[naner-i-1];
              str[naner-i-1]=b;
       }
       printf("\nA sua string foi invertida: %s\n", str);
       printf("\nAtividade 1 by Nicolas Maus da 4324.");
}