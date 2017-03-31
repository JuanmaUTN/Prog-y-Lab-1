#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1;
    int numero2;


    while(seguir=='s')
    {
        printf("\n");
        printf("A: %d, B: %d. \n", numero1, numero2);
        printf("MENU.\n");
        printf("1- Ingresar 1er operando. (A=x)\n");
        printf("2- Ingresar 2do operando. (B=y)\n");
        printf("3- Calcular la suma. (A+B)\n");
        printf("4- Calcular la resta. (A-B)\n");
        printf("5- Calcular la division. (A/B)\n");
        printf("6- Calcular la multiplicacion. (A*B)\n");
        printf("7- Calcular el factorial. (A!)\n");
        printf("8- Calcular todas las operaciones. \n");
        printf("9- Salir\n");
        printf("\n");

        scanf("%d",&opcion);
        printf("\n");

        switch(opcion)
        {
            case 1:
                numero1 = pedirNumero();
                break;

            case 2:
                numero2 = pedirNumero();
                break;

            case 3:
                sumar2Numeros(numero1, numero2);
                break;

            case 4:
                restar2Numeros(numero1, numero2);
                break;

            case 5:
                dividir2Numeros(numero1, numero2);
                break;

            case 6:
                multiplicar2Numeros(numero1, numero2);
                break;

            case 7:
                factorizar1Numero(numero1);
                break;

            case 8:
                sumar2Numeros(numero1, numero2);
                restar2Numeros(numero1, numero2);
                dividir2Numeros(numero1, numero2);
                multiplicar2Numeros(numero1, numero2);
                factorizar1Numero(numero1);
                break;

            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
