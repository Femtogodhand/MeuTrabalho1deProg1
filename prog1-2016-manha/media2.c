#include<stdio.h>
int main ()
{
    int num1, num2;
    int soma, sub mult, div;
    
    printf ("\nEntre com num1.\n\n");
    scanf ("%d",&num1);
    
    printf ("\nEntre com num2\n\n");
    scanf ("%d",&num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    
    printf("\nA Soma de %d + %d", num1, num2, soma);
    printf("\nA Subtracao de %d - %d = %d", num1, num2, sub);
    printf("\nA Multiplicacao de %d * %d = %d", num1, num2, mult);
    printf("\nA Divisao de %d / %d = %f\n", num1, num2, div);
    
    
    return 0;
    
}