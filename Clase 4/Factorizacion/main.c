#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int resultado = 1;
    int numIngr;

    printf("Ingrese un numero: ");
    scanf("%d", &numIngr);

    for(i = numIngr;i > 1;i --)
    {
        resultado = resultado * i;
    }
    printf("La factorizacion de %d da %d", numIngr, resultado);
}
