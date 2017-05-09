#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5] = {4,9,1,3,5};
    int* pvec;
    int i;

    //pvec = &vec[0]; //no va

    //pvec = &vec; //no va
/*

    printf("%d\n", vec[2]);
    printf("%d\n", *(pvec+2));

    printf("%d\n", vec[0]);
    printf("%d\n", *pvec);

    scanf("%d", &vec[2]);
    scanf("%d", pvec+2);
*/
    pvec = vec;

    for(i = 0;i < 5; i ++)
    {
        scanf("%d", pvec++);
    }

    printf("\n");

    for(i = 0;i < 5; i ++)
    {
        printf("(Numero: %d) (Direccion de memoria: %p)\n", *pvec++, pvec++);
    }
}
