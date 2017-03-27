#include <stdio.h>
#include <stdlib.h>

int numeroLegajo4Cifras();
int sueldoNeto();

int main()
{
    numeroLegajo4Cifras();
    return 0;
}

int numeroLegajo4Cifras()
{
    int numLeg;
    printf("Escriba el nùmero de legajo del empleado.");
    scanf("%d", &numLeg);
    while(numLeg < 1000 || numLeg > 9999)
    {
        printf("Reingrese el nùmero de legajo (1000 - 9999)");
        scanf("%d", &numLeg);
    }
    return numLeg;
}

int sueldoNeto()
{

}
