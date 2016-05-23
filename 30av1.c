#include<stdio.h>
/*
Programa em C para ler nome e a av1 de 30 alunos e imprimir a lista ordernada por ordem decrescente de nota.
*/
int main()
{
    
    char nome[30];
    float av1[30];
    int i
    
    printf("\nOla, meu nome e Joao Gabriel e este programa pode ser visto no seguinte endereco no Github: %d:", i+1);
    
    //Entre com nome e av1:
    for(i=0;i<30;i++)
    {
        printf("\nEntre com o seu nome %d:", i+1);
        scanf("%s", &nome[i]);
        
        printf("\nEntre com a av1 %d:", i+1);
        scanf("%f", &av1[i]);
    }
    
    //Gerar relatório:
    