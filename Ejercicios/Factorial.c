#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada = 0;
    int actual = 0;
    int salida = 1;

    printf("Ingresa el numero al que se le va a hacer factorial: ");
    printf("\n\n");

    scanf("%i", &entrada);
    printf("\n");

    for(int i = 1; i <= entrada; i++)
    {
        salida *= i;
    }

    printf("\nEl resultado de la factorial es: %i", salida);

    return 0;
}
