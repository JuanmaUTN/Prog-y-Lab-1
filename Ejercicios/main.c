#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    //numero1 = 0;
    scanf("%d", &numero1);
    int numero2;
    //numero2 = 0;
    scanf("%d", &numero2);
    int resultado;
    resultado = numero1 + numero2;

    printf("El resultado es: %d\n", resultado);

    if(resultado < 0)
    {
        printf("El resultado es negativo.\n");
    }
    else
    {
        if(resultado > 0)
        {
            printf("El resultado es positivo.\n");
        }
        else
        {
            if(resultado == 0)
            {
                printf("El resultado es 0.\n");
            }
        }
    }
    return 0;
}
