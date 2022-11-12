#include<stdio.h>

    struct notas{
    float prova1, prova2, prova3;
    int ip1, ip2, ip3;
    }maior, menor;

    struct dataaluno{
    char nome[100];
    unsigned int matricula;
    struct notas notas;
    }alunos[20];



void sapucaia(float nota, int index, int prova){
    switch(prova){
    case 1:
        if (nota>maior.prova1)
    {
        maior.prova1=nota;
        maior.ip1=index;
    }
    if (nota<menor.prova1)
    {
        menor.prova1=nota;
        menor.ip1=index;
    }
    break;
    case 2:
        if (nota>maior.prova2)
    {
        maior.prova2=nota;
        maior.ip2=index;
    }
    if (nota<menor.prova2)
    {
        menor.prova2=nota;
        menor.ip2=index;
    }
    break;
    case 3:
    if (nota>maior.prova3)
    {
        maior.prova3=nota;
        maior.ip3=index;
    }
    if (nota<menor.prova3)
    {
        menor.prova3=nota;
        menor.ip3=index;
    }
    break;
}
}

void media(int quant_alunos){
    float maior_media=0.0, menor_media=10.0;
    int index_menor_media, index_maior_media;
    
    for (int i = 0; i < quant_alunos; i++)
    {
        float media =(alunos[i].notas.prova1+alunos[i].notas.prova2+alunos[i].notas.prova3)/3;
        if (media>maior_media)
        {
            maior_media=media;
            index_maior_media=i;
        }
        if (media<menor_media)
        {
            menor_media=media;
            index_menor_media=i;
        }
    }
    printf("\nO aluno com maior media e: %s com media %.2f, suas notas sao: %.2f, %.2f e %.2f", alunos[index_maior_media].nome, maior_media, alunos[index_maior_media].notas.prova1, alunos[index_maior_media].notas.prova2, alunos[index_maior_media].notas.prova3);
    printf("\nO aluno com menor media e: %s com media %.2f, suas notas sao: %.2f, %.2f e %.2f", alunos[index_menor_media].nome, menor_media, alunos[index_menor_media].notas.prova1, alunos[index_menor_media].notas.prova2, alunos[index_menor_media].notas.prova3);
}

void mpt(){
    printf("\nA maior nota da prova 1 e: %.2f do aluno %s (%i).", maior.prova1 , alunos[maior.ip1].nome, alunos[maior.ip1].matricula);
    printf("\nA maior nota da prova 2 e: %.2f do aluno %s (%i).", maior.prova2 , alunos[maior.ip2].nome, alunos[maior.ip2].matricula);
    printf("\nA maior nota da prova 3 e: %.2f do aluno %s (%i).", maior.prova3 , alunos[maior.ip3].nome, alunos[maior.ip3].matricula);
    printf("\nA menor nota da prova 1 e: %.2f do aluno %s (%i).", menor.prova1 , alunos[menor.ip1].nome, alunos[menor.ip1].matricula);
    printf("\nA menor nota da prova 2 e: %.2f do aluno %s (%i).", menor.prova2 , alunos[menor.ip2].nome, alunos[menor.ip2].matricula);
    printf("\nA menor nota da prova 3 e: %.2f do aluno %s (%i).", menor.prova3 , alunos[menor.ip3].nome, alunos[menor.ip3].matricula);
}

void aprovacao(int quant_alunos){
    
    for (int i = 0; i < quant_alunos; i++)
    {
        float media =(alunos[i].notas.prova1+alunos[i].notas.prova2+alunos[i].notas.prova3)/3;
        printf("\nO aluno %s, com media %.2f foi ", alunos[i].nome, media);
        if (media<6)
        {
            printf("reprovado.");
        }
        else
        {
            printf("aprovado.");
        }
    }
}
    
int main(){
    int quant_alunos;
    

    printf("Quantos alunos deseja inserir na base de dados?(no max de 20 alunos)\n");
    scanf("%i", &quant_alunos);

    if (quant_alunos>20 || quant_alunos<= 0)
    {
        printf("\nA quantidade de alunos e invalida\n");
        return 1;
    }

    maior.prova1=0.0;
    maior.prova2=0.0;
    maior.prova3=0.0;
    menor.prova1=10.0;
    menor.prova2=10.0;
    menor.prova3=10.0;

    for (int i = 0; i < quant_alunos; i++)
    {
        fflush(stdin);
        printf("\nQual o nome do aluno? ");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("\nQual a matricula do aluno? ");
        scanf("%i", &alunos[i].matricula);
        fflush(stdin);
        printf("\nInsira a primeira nota deste aluno: ");
        scanf("%f", &alunos[i].notas.prova1);
        fflush(stdin);
        sapucaia(alunos[i].notas.prova1, i, 1);
        printf("\nInsira a segunda nota deste aluno: ");
        scanf("%f", &alunos[i].notas.prova2);
        fflush(stdin);
        sapucaia(alunos[i].notas.prova2, i, 2);
        printf("\nInsira a terceira nota deste aluno: ");
        scanf("%f", &alunos[i].notas.prova3);
        fflush(stdin);
        sapucaia(alunos[i].notas.prova3, i, 3);
    }
    mpt();
    media(quant_alunos);
    aprovacao(quant_alunos);
}