#include<stdio.h>

int ordena(int *n1, int *n2, int *n3, char ordem){
    int aux;
    switch (ordem)
    {
    case 'c':
    case 'C':
        
        if( *n1 > *n2 ){
            aux = *n1;
            *n1 = *n2;
            *n2 = aux;
        }
        if( *n2 > *n3 ){
            aux = *n2;
            *n2 = *n3;
            *n3 = aux;
        }
        if( *n1 > *n2 ){
            aux = *n1;
            *n1 = *n2;
            *n2 = aux;
        }
        
        break;
    
    case 'd':
    case 'D':
    
        if ( *n1 < *n2)
        {
            aux = *n1;
            *n1 = *n2;
            *n2 = aux;
           
        }
        if ( *n2 < *n3 )
        {
            aux = *n2;
            *n2 = *n3;
            *n3 = aux;
           
        }
        if ( *n1 < *n2)
        {
            aux = *n1;
            *n1 = *n2;
            *n2 = aux;
           
        }
        break;

    default:
        return -1;
    }
    
    return 0;
}

int main(){
    
    int *n1, *n2, *n3;
    char ordem;
    
    printf("\nEntre com valores de n1, n2 e n3.\n");
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("\nEscolha qual oredm deseja: \n(c)crescente;  \n(d)decrescente;\n");
    fflush(stdin);
    scanf("%c", &ordem);
    int o=ordena(&n1, &n2, &n3, ordem);
    if (o==-1)
    {
        printf("\nErro");
        return -1;
    }
    printf("\nOrdem de n1, n2 e n3: \nn1: %i \nn2: %i \nn3: %i", n1, n2, n3);
    printf("\nNome:Nicolas Maus Krynski Nuens\nTurma:4324");
    return 0;
}