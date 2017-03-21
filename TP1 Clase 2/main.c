#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int contador = 0;
    int contNumPares = 0;
    int contNumImpar = 0;
    int sumaImpares = 0;
    int sumaTodos = 0;
    float promedioNumeros;
    int numeroMayor = INT_MIN;
    int numeroImparMenor = INT_MAX;
    int numerosEntre3y15 = 0;
    int numerosEntre16y29 = 0;
    int numerosMasDe30 = 0;
    int numeroIngresado;

    while(contador < 10)
    {
        contador ++;
        printf("Ingrese un numero: ");
        scanf("%i", &numeroIngresado);
        while(numeroIngresado < 1)
        {
             printf("Ingrese un numero positivo: ");
             scanf("%i", &numeroIngresado);
        }

        //numero mayor e impar menor
        if(contador == 0)
        {
            numeroIngresado = numeroMayor;
            if(numeroIngresado % 2 == 1)
            {
                numeroIngresado = numeroImparMenor;
            }
        }

        //suma todos los nùmeros
        sumaTodos = sumaTodos + numeroIngresado;

        //cantidad de numeros pares e impares.
        if(numeroIngresado % 2 == 0)
        {
            contNumPares ++;
        }
        else
        {
            if(numeroIngresado % 2 == 1)
            {
                contNumImpar ++;
            }
        }

        //sumar todos los impares.
        if(numeroIngresado % 2 == 1)
        {
            sumaImpares = sumaImpares + numeroIngresado;
        }

        //numero mayor ingresado.
        if(numeroIngresado > numeroMayor)
        {
            numeroMayor = numeroIngresado;
        }

        //numero impar menor ingresado.
        if(numeroIngresado % 2 == 1)
        {
            if(numeroIngresado < numeroImparMenor)
            {
                numeroImparMenor = numeroIngresado;
            }
        }

        //numeros entre 3 y 15.
        if(numeroIngresado < 15 && numeroIngresado > 3)
        {
            numerosEntre3y15 ++;
        }

        //numeros entre 16 y 29
        if(numeroIngresado < 29 && numeroIngresado > 16)
        {
            numerosEntre16y29 ++;
        }

        //numeros mayores a 30
        if(numeroIngresado > 30)
        {
            numerosMasDe30 ++;
        }
    }
      //promedio numeros
        promedioNumeros = (float)sumaTodos / contador;

        printf("Numeros pares: %i\n", contNumPares);
        printf("Numeros impares: %i\n", contNumImpar);
        printf("La suma de todos los impares da: %i\n", sumaImpares);
        printf("El promedio de todos los numeros da: %f\n", promedioNumeros);
        printf("El numero mas alto es: %i\n", numeroMayor);
        printf("Numero impar mas chico: %i\n", numeroImparMenor);
        printf("Hay %i numeros entre 3 y 15, %i entre 16 y 29, y %i mayores a 30.\n", numerosEntre3y15, numerosEntre16y29, numerosMasDe30);

        //todos los numeros hasta el total de la suma de impares. ( y la suma de todos esos)
        int numerosDesdeImpar = sumaImpares;
        int sumador = 0;
        for(;;)
        {
            numerosDesdeImpar = sumaImpares --;
            printf("%i\n", numerosDesdeImpar);
            sumador = sumador + numerosDesdeImpar;
            if(numerosDesdeImpar == 1)
            {
                break;
            }
        }
        printf("Suma de todos los anteriores: %i\n", sumador);

        return 0;
}
