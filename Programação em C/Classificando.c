#include <stdio.h>
#include <stdlib.h>
int main()
{
    float prim, seg, ter;
    int media;
    char cont; //usei esta char para fazer a pergunta final.
    do
    {
    printf("\nEntre com notas que sejam de 0 a 10 ou nao sera possivel fazer a media.\n");
    printf("\nPrimeira nota:\n");
    scanf("%f", &prim);
    printf("\nSegunda nota:\n");
    scanf("%f", &seg);
    printf("\nTerceira nota:\n");
    scanf("%f", &ter);
    media = (prim+seg+ter)/3;
    if (prim<0 || prim>10 || seg<0 || seg>10 || ter<0 || ter>10 || !prim || !seg || !ter) 
    {
        printf("\nNao foi possivel calcular sua media.");
    }
    else switch (media)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("\nSua media foi insuficiente.");
        printf("\nSua media foi %i", media);
        break;
    case 6:
    case 7:
        printf("\nSua media foi mediocre.");
        printf("\nSua media foi %i", media);
        break;
    case 8:
    case 9:
    case 10:
        printf("\nSua media foi excelente.");
        printf("\nSua media foi %i", media);
        break;   
    }
    printf("\nSua media foi feita pelo Nicolas da 4324.\n");
    printf("\n\nDeseja continuar fazendo medias?\n(n) Nao\n(s) Sim\n\n");
    scanf(" %c", &cont);
} while (media>=10 && media<=0 || cont !='n');
system('pause');
}