#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct
{
    int ident; //primary key
    char raza[30];
    char nombre[30];
    int vacunaAlDia;
    int elDuenio; //foreign key //codigo del dueño
} ePerro;

typedef struct
{
    int codigo; //primary key
    char nombre[30];
    char telefono[30];
} eDuenio;

ePerro cargarPerro(int, char[], char[], int, int);
eDuenio cargarDuenio(int, char[], char[]);
void mostrarPerro(ePerro);
void mostrarDuenio(eDuenio);

int main()
{
    int retorno = 0;
    int i;
   ePerro Perros[5];
   eDuenio Duenios[5];

   Perros[0] = cargarPerro(1, "Pug", "Firulais", 0, 1);
   Perros[1] = cargarPerro(2, "Pastor Aleman", "Luisito", 1, 2);
   Perros[2] = cargarPerro(3, "Labrador", "Coco", 0, 3);
   Perros[3] = cargarPerro(4, "Bulldog", "Tommy", 1, 4);
   Perros[4] = cargarPerro(5, "Pitbull", "AlCapone", 1, 5);

   Duenios[0] = cargarDuenio(1, "Juan", "12345678");
   Duenios[1] = cargarDuenio(2, "Luis", "87654321");
   Duenios[2] = cargarDuenio(3, "Pedro", "13579753");
   Duenios[3] = cargarDuenio(4, "Brayan", "24680864");
   Duenios[4] = cargarDuenio(5, "Kevin", "10293847");

   for(i=0;i<5;i++)
   {
       printf("Perro: ");
       mostrarPerro(Perros[i]);
   }

    printf("\n");

   for(i=0;i<5;i++)
   {
       printf("Dueño: ");
       mostrarDuenio(Duenios[i]);
   }

   printf("\n");
   printf("Vacunas:\n");
   printf("\n");

   for(i=0;i<5;i++)
   {
       if(Perros[i].vacunaAlDia == 0)
       {
           printf("Falta vacunar. (ID del perro: %d)\n", Perros[i].ident);
       }
   }
   return 0;
}

ePerro cargarPerro(int ident, char raza[], char nombre[], int vacunaAlDia, int elDuenio)
{
    ePerro miPerro;
    fflush(stdin);
    miPerro.ident = ident;
    strcpy(miPerro.raza, raza);
    strcpy(miPerro.nombre, nombre);
    miPerro.vacunaAlDia = vacunaAlDia;
    miPerro.elDuenio = elDuenio;

    return miPerro;
}

eDuenio cargarDuenio(int codigo, char nombre[], char telefono[])
{
    eDuenio miDuenio;
    fflush(stdin);
    miDuenio.codigo = codigo;
    strcpy(miDuenio.nombre, nombre);
    strcpy(miDuenio.telefono, telefono);

    return miDuenio;
}

void mostrarPerro(ePerro perro)
{
    printf("(ID: %d) (Raza: %s) (Nombre: %s) (V.A.D: %d) (Dueño: %d)\n", perro.ident, perro.raza, perro.nombre, perro.vacunaAlDia, perro.elDuenio);
}

void mostrarDuenio(eDuenio duenio)
{
    printf("(ID: %d) (Nombre: %s) (Tel: %s)\n", duenio.codigo, duenio.nombre, duenio.telefono);
}








