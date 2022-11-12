#include <stdio.h>
#include <stdlib.h>

float valor1, valor2;
char operacao, continuacao;
float soma(float valor1, float valor2)
{
    float adicao;
    adicao=valor1+valor2;
    return adicao;
}
float subtracao(float valor1, float valor2)
{
    float subtrair;
    subtrair=valor1-valor2;
    return subtrair;
}
float multiplicacao(float valor1, float valor2)
{
    float multiplicar;
    multiplicar=valor1*valor2;
    return multiplicar;
}
float divisao(float valor1, float valor2)
{
    float dividir;
    dividir=valor1/valor2;
    return dividir;
}

int main()
{
    printf("\n\nCalculadora do Nicolas 4324\n");
    do
    {
        printf("\nEscolha dois numeros para realizar a operacao.\n");
        printf("\nPrimeiro numero:\n");
        scanf("%f", &valor1);
        printf("\nSegundo numero:\n");
        scanf("%f", &valor2);
        printf("\nEscolha uma operacao:\n(m) Multiplicar\n(d) Dividir\n(a) Adicao\n(s) Subtrair\n");
        scanf(" %c", &operacao);
        switch (operacao)
        {
        case 'm':
            printf("\nA multiplicacao e %f\n", multiplicacao);
            break;
        case 'd':
            printf("\nA divisao e %f\n", divisao);
            break;
        case 'a':
            printf("\nA soma e %f\n", soma);
            break;
        case 's':
            printf("\nA subtracao e %f", subtracao);
            break;
        }   
        printf("\nDeseja continuar calculando?\n(q) Nao\n(c) Sim\n");
        scanf(" %c", &continuacao);
    } while (continuacao != 'q');
    system('pause');
}