#include "Funciones.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

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
    long long int resultado;
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

    if(resultado <= 0)
    {
        printf("La factorizacion de %d da error.\n", numIngr);
    }
    else
    {
        printf("La factorizacion de %d da %d.\n", numIngr, resultado);
    }
    return resultado;
}

 //boludeces

int mostrarTablaAscii()
{
    printf("TABLA ASCII\n");
    int i;
    for(i = 256;i > 0;i --)
    {
        printf("( %d = %c )\n",i ,i);
    }
    return 0;
}

int saludoDeApu()
{
    char saludoApu[50] = "Gracias, vuelva prontos!";
    int i;
    printf("*Voz de Apu*\n");
    for(i = 0;i < 24;i ++)
    {
        printf("%c", saludoApu[i]);
        Sleep(70);
    }
    printf("\n");
    return 0;
}

int pantallaDeCarga()
{
    int i;
    int time = 20;
    printf("Cargando programa... ");
    for(i = 0;i < 100;i ++)
    {
        printf("(%d)", i);
        Sleep(time);
        if(i > 9)
        {
            printf("\b\b\b\b");
        }
        else
        {
            printf("\b\b\b");
        }
    }
    system("cls");
    printf("============================\n");
    printf("      Cargado con exito!\n");
    printf("============================\n");
    printf("By: Juan Manuel Costas (1-C)\n");
    printf("============================\n");
    printf(" Profesor: German Scarafilo\n");
    printf("============================\n");
    printf("\n");
    system("pause");
    system("cls");
    return 0;
}
