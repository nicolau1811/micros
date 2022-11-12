#include<stdio.h>

int trianguloretangulo(float *oposto, float *adjacente, float *hipotenusa){

    if (*oposto != 0 && *adjacente !=0 && *hipotenusa !=0)
    {
        return -1;
    }

    if (*oposto == 0 && (*adjacente == 0 || *hipotenusa == 0))
    {
        return -1;
    }
    
    
}

int main(){
    float oposto, adjacente, hipotenusa;

    printf("\nEntre com os valores do triangulo utilizanddo 0 como o segmento que deseja descobrir;\nCateto oposto: ");
    scanf("%f", &oposto);
    printf("\nCateto adjacente: ");
    scanf("%f", &adjacente);
    printf("\nHipotenusa: ");
    scanf("%f", &hipotenusa);
}