#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char primerNombre[20], segundoNombre[20], apellido[100];
    int largoPN, largoSN, largoA;

    printf("Ingrese el primer nombre: ");
    gets(primerNombre);
    printf("Ingrese el segundo nombre: ");
    gets(segundoNombre);
    printf("Ingrese el apellido: ");
    gets(apellido);

    strlwr(primerNombre);
    strlwr(segundoNombre);
    strlwr(apellido);

   /* largoPN = strlen(primerNombre);
    largoSN = strlen(segundoNombre);
    largoA = strlen(apellido);

     primerNombre[largoPN] = toupper(primerNombre[0]);
    segundoNombre[largoSN] = toupper(segundoNombre[0]);
    apellido[largoA] = toupper(apellido[0]);
    */

    primerN = toupper(primerNombre[0]);
    segundoN = toupper(segundoNombre[0]);
    apell = toupper(apellido[0]);




    strcat(apellido, ", ");
    strcat(apellido, primerNombre);
    strcat(apellido, " ");
    strcat(apellido, segundoNombre);

    puts(apellido);




    return 0;
}
