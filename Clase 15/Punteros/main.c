#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable = 9;
    int* punteroInt;
    int* otro;

    punteroInt = &variable;
    otro = punteroInt;
    *otro = 14;

    printf("%p\n", &variable);
    printf("%p\n", punteroInt);
    printf("%d\n", variable);
    printf("%d\n", *punteroInt);
    printf("%p\n\n", &punteroInt);

    *punteroInt = 17;
    printf("%p\n", &variable);
    printf("%p\n", punteroInt);
    printf("%d\n", variable);
    printf("%d\n", *punteroInt);
    printf("%p\n\n", &punteroInt);

    scanf("%d", punteroInt);
    printf("%p\n", &variable);
    printf("%p\n", punteroInt);
    printf("%d\n", variable);
    printf("%d\n", *punteroInt);
    printf("%p\n\n", &punteroInt);
}
