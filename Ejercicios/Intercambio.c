#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enteroX;
    int enteroY;
    int enteroIntercambiable;

    printf("Da el valor de x: ");
    scanf("%i: ", &enteroX);

    printf("Da el valor de y: ");
    scanf("%i: ", &enteroY);

    enteroIntercambiable = enteroX;
    enteroX = enteroY;
    enteroY = enteroIntercambiable;

    printf("\nEl valor intercambiado del entero x es: %i \n", enteroX);
    printf("El valor intercambiado del entero y es: %i \n", enteroY);

    getchar();
    return 0;
}
