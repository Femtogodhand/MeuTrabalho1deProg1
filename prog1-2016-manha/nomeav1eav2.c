#include<stdio.h>
int main()

{
    float av1, av2, media;
    char nome[20];

    printf("\nEntre com o seu nome.");
    scanf("%s",&nome);
    
    printf("\n Entre com a av1.");
    scanf("%f",&av1);
    
    printf("\nEntre com a av2.");
    scanf("%f",&av2);
    
    media = (av1+av)/2;
    
    
    printf("\nOla%s, sua media = %.2f", nome, media)
    return 0;
}