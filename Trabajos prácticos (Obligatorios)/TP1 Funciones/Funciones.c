#include "Funciones.h"
#include <stdlib.h>
#include <stdio.h>

 //operaciones matemàticas

int pedirNumeroInt(int num)
{
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    return num;
}

int sumar2Numeros(int a, int b)
{
    int resultado;
    resultado = a + b;
    printf("La suma da: %d.\n", resultado);
    return resultado;
}

int restar2Numeros(int a, int b)
{
    int resultado;
    resultado = a - b;
    printf("La resta da: %d.\n", resultado);
    return resultado;
}

int dividir2Numeros(int a, int b)
{
    int resultado;

    if(b == 0)
    {
        printf("La division da error. (No se puede dividir entre 0)\n");
        return 0;
    }
    else
    {
        resultado = a / b;
        printf("La division da: %d.\n", resultado);
    }
    return resultado;
}

int multiplicar2Numeros(int a, int b)
{
    int resultado;
    resultado = a * b;
    printf("La multiplicacion da: %d.\n", resultado);
    return resultado;
}

int factorizar1Numero(int numIngr)
{
    int i;
    long long int resultado = 1;

    for(i = numIngr;i > 1;i --)
    {
        resultado = resultado * i;
    }
    printf("La factorizacion de %d da %d.\n", numIngr, resultado);
    return resultado;
}

 //boludeces

int mostrarTablaAscii(int i)
{
    printf("TABLA ASCII\n");
    for(i = 256;i > 0;i --)
    {
        printf("( %d = %c )\n",i ,i);
    }
    return 0;
}

