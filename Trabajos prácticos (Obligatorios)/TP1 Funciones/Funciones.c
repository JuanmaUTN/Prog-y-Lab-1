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
    int time = 100;
    printf("*Voz de Apu*\n");
    printf("G");
    Sleep(time);
    printf("r");
    Sleep(time);
    printf("a");
    Sleep(time);
    printf("c");
    Sleep(time);
    printf("i");
    Sleep(time);
    printf("a");
    Sleep(time);
    printf("s");
    Sleep(time);
    printf(",");
    Sleep(time);
    printf(" ");
    Sleep(time);
    printf("v");
    Sleep(time);
    printf("u");
    Sleep(time);
    printf("e");
    Sleep(time);
    printf("l");
    Sleep(time);
    printf("v");
    Sleep(time);
    printf("a");
    Sleep(time);
    printf(" ");
    Sleep(time);
    printf("p");
    Sleep(time);
    printf("r");
    Sleep(time);
    printf("o");
    Sleep(time);
    printf("n");
    Sleep(time);
    printf("t");
    Sleep(time);
    printf("o");
    Sleep(time);
    printf("s");
    Sleep(time);
    printf("!");
    printf("\n");


    return 0;
}

int pantallaDeCarga()
{
    int i;
    int time = 100;
    printf("Cargando programa... ");
    for(i = 0;i < 100;)
    {
        i += 10;
        printf("(%d)", i);
        Sleep(time);
        printf("\b\b\b\b");
    }
    system("cls");
    printf("==================\n");
    printf("Cargado con exito!\n");
    printf("==================\n");
    printf("Aguante el 1-C!!!\n");
    printf("==================\n");
    Sleep(1000);
    system("cls");
    return 0;
}
