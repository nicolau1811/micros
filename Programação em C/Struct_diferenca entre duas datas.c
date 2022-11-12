#include<stdio.h>

struct dma
    {
        int dia;
        int mes;
        int ano;
        int dif_m;
    }data1, data2;

int main()
{
    printf("Entre com a primeira data: ");
    scanf("%i %i %i", &data1.dia, &data1.mes, &data1.ano);
    printf("\nEntre com a segunda data: ");
    scanf("%i %i %i", &data2.dia, &data2.mes, &data2.ano);
    if (data1.dia<0 || data1.dia>30 || data1.mes<0 || data1.mes>12 || data1.ano<0 || data2.dia<0 || data2.dia>30 || data2.mes<0 || data2.mes>12 || data2.ano<0)
    {
        printf("\nNao foi possivel calcuar essas datas\n");
        return 0;
    }
    if ((data1.mes == 2 || data2.mes == 2) && (data1.dia>28 || data2.dia>28) && (data1.ano %4!=0 || data2.ano %4!=0)) 
    {
        printf("\nO seu ano nao e bissexto\n");
        return 0;
    }
    if ((data1.mes == 2 || data2.mes == 2) && (data1.dia>29 || data2.dia>29) && (data1.ano %4==0 || data2.ano %4==0)) 
    {
        printf("\nO seu ano e bissexto, porem nao e possivel calcular\n");
        return 0;
    }
    calculo();
}
void calculo()
{
    int ckt=0;
    switch(data1.mes)
    {
        case 1:  data1.dif_m=0; break;

        case 2:  data1.dif_m=31; break;
        
        case 3:  data1.dif_m=59; break;
        
        case 4:  data1.dif_m=90; break;
        
        case 5:  data1.dif_m=120; break;
        
        case 6:  data1.dif_m=151; break;
        
        case 7:  data1.dif_m=181; break;
        
        case 8:  data1.dif_m=212; break;
        
        case 9:  data1.dif_m=243; break;
       
        case 10: data1.dif_m=273; break;
       
        case 11: data1.dif_m=304; break;
        
        case 12: data1.dif_m=334; break;
    }
    switch(data2.mes)
    {
        case 1:  data2.dif_m=0; break;
        
        case 2:  data2.dif_m=31; break;
       
        case 3:  data2.dif_m=59; break;
       
        case 4:  data2.dif_m=90; break;
      
        case 5:  data2.dif_m=120; break;
      
        case 6:  data2.dif_m=151; break;
       
        case 7:  data2.dif_m=181; break;
       
        case 8:  data2.dif_m=212; break;
       
        case 9:  data2.dif_m=243; break;
       
        case 10: data2.dif_m=273; break;
       
        case 11: data2.dif_m=304; break;
       
        case 12: data2.dif_m=334; break;
    }
    
    int h, j, mp=0;
    h= data1.ano/4;
    j= data2.ano/4;
    
    ckt = (data1.dia + data1.dif_m + (data1.ano*365) + h)-(data2.dia + data2.dif_m + (data2.ano*365) + j);
    
    if (data1.ano%4 ==0 ^ data2.ano%4 ==0) // ^=XOR 
    {
        ckt+1;
        mp++;
    }
    else
    {
        ckt-1;
    }
    
    
    if (ckt<0)
    {
        ckt*=-1;
    }
    
    if (data1.ano%4 ==0 && data1.mes <= 2)
    {
        ckt+=1;
    }
   
    if (mp=0)
    {
        if (data2.ano%4 ==0 && data2.mes > 2)
        {
            ckt+=1;
        }
    }
    

    printf("\nA diferenca em dias completos e: %i\n", ckt);
    //se voce colocar a mesma data, o resultado valera 0 pois nao leva em cosideração as horas.
    printf("\nFeito por Nicolas Maus da 4324\n");
}