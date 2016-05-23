/* numero par e numero impar */
#include <stdio.h>
int main ()
{
    int num;
    int resto;

    printf ("\ndigite um numero.\n\n");
    scanf ("%d",&num);

    resto=num % 2;

    if (num%2==0)
    {
        printf ("\no numero digitado e par.\n\n");
    }
    else
    {
        printf ("\no numero digitado e impar.\n\n");
    }
    
    
    return 0;
}
}