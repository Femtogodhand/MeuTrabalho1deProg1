#include<stdio.h>
    int main ()
{
    int idade;
    
    printf ("\nEnre com sua idade.\n\n");
    scanf ("%d",&idade);
    
    if (idade < 16)
    {
        printf ("\nVocê não pode votar.\n\n");
    }
    
    if (idade ≥ 18) and (idade ≤ 70) 
    {
        printf("\nO voto é obrigatório.\n\n");
    }
    
    if (16 ≤ idade < 18 ) or (idade > 70)
    {
        printf("\nO voto é facultativo.\n\n");
    }
    
    return 0;
}
