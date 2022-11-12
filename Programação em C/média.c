#include <stdio.h>
#include <stdlib.h>
int main()
{
    float prim, seg, ter, media;
    do
    {
    printf("Primeira nota:\n");
    scanf("%f", &prim);
    printf("\nSegunda nota:\n");
    scanf("%f", &seg);
    printf("\nTerceira nota:\n");
    scanf("%f", &ter);
    media=(prim+seg+ter)/3;
    
    if (media<0 || media>=10)
    {
        printf("\n\nErro, sua media nao pode ser caculada\n\n");
    }
    else if (media<6)
    {
        printf("\n\nInsuficiente, sua media foi: %f\n\n", media);
    }
    else if (media<=6 && media<8)
    {
        printf("\n\nMediocre, sua media foi: %f\n\n", media);
    }
    else if (media>8)
    {
        printf("\n\nExcelente, sua media foi: %f\n\n", media);
    }
} while (media>=10 && media<=0);
}
    