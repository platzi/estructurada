#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroActual = 0;

    do
    {
        numeroActual++;

        if(numeroActual%2 == 0)
            printf("%i \n", numeroActual);

    }while(numeroActual < 100);

    return 0;
}
