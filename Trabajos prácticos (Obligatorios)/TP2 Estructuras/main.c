#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>


void cargar10ClientesHardcode(eCliente[]);


int main()
{
    char seguir='s';
    int opcion=0;
    int i;

    eCliente Clientes[20];

    for(i = 0; i < 20; i ++)
    {
        Clientes[i].flagEstado = 0;
    }

    cargar10ClientesHardcode(Clientes); //10 clientes que se cargan automaticamente.

    while(seguir=='s')
    {
        printf("======\n MENU\n======\n");
        printf("1_ Agregar cliente.\n");
        printf("2_ Mostrar clientes.\n");
        printf("3_ Borrar cliente.\n");
        printf("4_ Mostrar lista ordenada por nombre.\n");
        printf("5_ Grafico de edades (horizontal).\n");
        printf("6_ Salir.\n\n");
        printf("Elija una opcion: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            cargar1Cliente(Clientes);
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case 2:
            system("cls");
            mostrarClientes(Clientes);
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            borrar1Cliente(Clientes);
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case 4:
            system("cls");
            ordenarNombres(Clientes);
            mostrarClientes(Clientes);
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case 5:
            system("cls");
            graficoEdadesHorizontal(Clientes);
            printf("\n\n");
            system("pause");
            system("cls");
            break;

        case 6:
            system("cls");
            printf("\n");
            saludoDeApu();
            seguir = 'n';
            break;

        default:
            printf("\nOpcion incorrecta.");
            Sleep(500);
            system("cls");
            break;
        }
    }
    return 0;
}

void cargar10ClientesHardcode(eCliente cliente[])
{
    int codigo[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombre[10][50]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    char dni[10][20]= {"123","1324","1234","12334","2341","242341","242341","243241","2341","22341"};
    int edad[10]= {10,18,19,20,34,35,36,40,1,100};
    int flagEstado[10]= {1,1,1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<10; i++)
    {
        cliente[i].codigo = codigo[i];
        strcpy(cliente[i].nombre, nombre[i]);
        strcpy(cliente[i].dni, dni[i]);
        cliente[i].flagEstado = flagEstado[i];
        cliente[i].edad = edad[i];
    }
}






