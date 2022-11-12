#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero1, numero2, resultado;
    char operacao, continuacao;
    printf("\n\nCalculadora do Nicolas 4324\n");
    do
    {
        printf("\nEscolha dois numeros para realizar a operacao.\n");
        printf("\nPrimeiro numero:\n");
        scanf("%f", &numero1);
        printf("\nSegundo numero:\n");
        scanf("%f", &numero2);
        printf("\nEscolha uma operacao:\n(m) Multiplicar\n(d) Dividir\n(a) Adicao\n(s) Subtrair\n");
        scanf(" %c", &operacao);
        switch (operacao)
        {
        case 'm':
            resultado= numero1*numero2;
            printf("\n%f x %f = %f\n", numero1, numero2, resultado);
            break;
        case 'd':
            resultado= numero1/numero2;
            printf("\n%f / %f = %f", numero1, numero2, resultado);
            break;
        case 'a':
            resultado= numero1+numero2;
            printf("\n%f + %f = %f\n", numero1, numero2, resultado);
            break;
        case 's':
            resultado= numero1-numero2;
            printf("\n%f - %f = %f\n", numero1, numero2, resultado);
            break;
        }   
        printf("\nDeseja continuar calculando?\n(q) Nao\n(c) Sim\n");
        scanf(" %c", &continuacao);
    } while (continuacao != 'q');
    system('pause');
}