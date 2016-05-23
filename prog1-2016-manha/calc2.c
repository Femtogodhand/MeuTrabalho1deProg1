#include <stdio>
#include <math.h>

int main()
{
    int opc, continuar;
    int num1;
    float res;
    
    do
    {
        //desenha o menu
        printf("\nQual)
        
        //ler1 numeros
        printf("\nEntre com num1:");
        scanf("%d",&num1);
        
        seleciona a operacao
        switch (opc)
        {
            case 1: //raiz quadrada
                res = sqrt (num1);
                printf("\n Raiz quadrada de %d = %.2f", num1, res);
                break;
            case 2: //potencia
                res = pow (num1, 2);
                printf("\n O quadrado de %d = %.2f", num1, res)
        
        }
    }
}