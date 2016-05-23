#include<stdio.h>

int main()
{
    char nomes[5][20];
    float salarios[5];
    int 1;
    
    //Entre com nome do 1. funcionario:
    for(i=0;i<5;i++)
    {
        printf("\nEntre com nome do %d. funcionário:",i+1);
        scanf("%", nome[I]);
        
        printf("\nEntre com salario do%d. funcionario:", i+1);
        scanf("%f", salarios[i]);
    }
    
    //gerar relatorio
    printf("\nNome\t\tSalario bruto\tSalario Liquido");
    printf("n------------------------------------------------");
    for(i=0;i<5,i++)
    {
    printf("\n%s\t\t%.2f", nome[i], salarios[i], salarios[i]*0.8);
    }
    
    printf("")
    }