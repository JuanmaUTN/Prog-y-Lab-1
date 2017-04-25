#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct
{
    int idSerie;
    char titulo[30];
    int temporadas;
    char genero[30];
    int estado;
} eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int idSerie;
    int estado;
} eCliente;

typedef struct
{
    int idSerie[5];
    int contador;
} eRank;

void cargarSerieHardcode(eSerie[]);
void cargarClientesHardcode(eCliente[]);

void mostrarSeries(eSerie[]);
void mostrarClientes(eCliente[]);

void ClienteSerie(eCliente[], eSerie[]);
void SerieCliente(eSerie[], eCliente[]);

void serieEspecifica(eSerie[], eCliente[]);

void serieMenosPopular(eSerie[], eCliente[]);






int main()
{
    int opcion = 0;
    int seguir = 1;
    int i;

    eSerie Series[5];
    eCliente Clientes[10];

    cargarSerieHardcode(Series);
    cargarClientesHardcode(Clientes);

    while(seguir == 1)
    {
        printf("======\n");
        printf(" MENU\n");
        printf("======\n");
        printf("1_ Mostrar series.\n");
        printf("2_ Mostrar clientes.\n");
        printf("3_ Mostrar listado cliente-serie.\n");
        printf("4_ Mostrar listado serie-cliente.\n");
        printf("5_ Mostrar serie especifica.\n");
        printf("6_ Mostrar serie menos popular.\n");
        printf("7_ Salir.\n");
        printf("\n");
        printf("Elija una opcion: ");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            mostrarSeries(Series);
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 2:
            system("cls");
            mostrarClientes(Clientes);
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            ClienteSerie(Clientes, Series);
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 4:
            system("cls");
            SerieCliente(Series, Clientes);
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 5:
            system("cls");
            serieEspecifica(Series, Clientes);
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 6:
            system("cls");
            serieMenosPopular(Series, Clientes);
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 7:
            system("cls");
            seguir = 0;
            break;
        }
    }
    return 0;
}

void cargarSerieHardcode(eSerie series[])
{
    int idSerie[5]= {100,101,102,103,104};
    int estado[5]= {1,1,1,1,1};
    char titulo[5][30]= {"Dr. House","Breaking Bad","Grey's Anatomy","House Of Cards","The Walking Dead"};
    int temporadas[5]= {8,7,12,5,7};
    char genero[5][30]= {"Drama","Policial","Drama","Politica","Terror"};

    int i;
    for(i=0; i<5; i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }
}

void cargarClientesHardcode(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"Juan","Maria","Pedro","Luis","Romina","Jose","Andrea","Patricia","Luciano","Camila"};
    int estado[10]= {1,1,1,1,1,1,1,1,1,1};
    int idSerie[10]= {103,100,101,103,103,101,102,104,100,102};
    int i;

    for(i=0; i<10; i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];
        clientes[i].idSerie = idSerie[i];
    }
}

void mostrarSeries(eSerie series[])
{
    int i;

    printf("======== Series: ========\n");

    for(i = 0; i < 5; i ++)
    {
        printf("\n");
        printf("=====( %s )=====\n", series[i].titulo);
        printf("(ID: %d) (Temporadas: %d) (Genero: %s) (Estado: %d)\n", series[i].idSerie, series[i].temporadas, series[i].genero, series[i].estado);
    }
    printf("\n");
}

void mostrarClientes(eCliente clientes[])
{
    int i;
    printf("======== Clientes: ========\n");
    printf("\n");

    for(i = 0; i < 10; i ++)
    {
        printf("(ID: %d) (Nombre: %s) (Serie: %d) (Estado: %d)\n", clientes[i].idCliente, clientes[i].nombre, clientes[i].idSerie, clientes[i].estado);
    }
}

void ClienteSerie(eCliente clientes[], eSerie series[])
{
    int i, k;

    printf("========================\n");
    printf("Listado Cliente - Serie:\n");
    printf("========================\n");
    for (i = 0; i < 10; i ++)
    {
        for(k = 0; k < 5; k ++)
        {
            if(clientes[i].idSerie == series[k].idSerie)
            {
                printf("(Cliente: %s) (Serie que ve: %s)\n", clientes[i].nombre, series[k].titulo);
            }
        }
    }
}

void SerieCliente(eSerie series[], eCliente clientes[])
{
    int i, k;

    printf("========================\n");
    printf("Listado Serie - Clientes:\n");
    printf("========================\n");

    for(i = 0; i < 5; i ++)
    {
        printf("=== Serie: %s ===\n", series[i].titulo);
        for(k = 0; k < 10; k ++)
        {
            if(series[i].idSerie == clientes[k].idSerie)
            {
                printf("(Cliente: %s)\n", clientes[k].nombre);
            }
        }
        printf("\n");
    }
}

void serieEspecifica(eSerie series[], eCliente clientes[])
{
    int i;
    int idSerie;

    printf("Ingrese el ID de la serie: ");
    scanf("%d", &idSerie);
    printf("\n");

    for(i = 0; i < 10; i ++)
    {
        if(idSerie == series[i].idSerie)
        {
            printf("=== Serie: %s ===\n", series[i].titulo);
        }
    }

    for(i = 0; i < 10; i ++)
    {
        if(clientes[i].idSerie == idSerie)
        {
            printf("(Cliente: %s) (ID: %d)\n", clientes[i].nombre, clientes[i].idCliente);
        }
    }
}

void serieMenosPopular(eSerie series[], eCliente clientes[])
{
    int i;
    eRank ranks[5];


    for(i = 0;i < 5;i ++)
    {
        ranks[i].idSerie = series[i].idSerie;
        ranks[i].contador = 0;
    }
}












