#include <stdio.h>

int main()
{
    printf("Salida de datos. Parte 1.\n\n");

    int enteroA = 1;
    float flotanteA = 1.1;
    double doubleA = 1.1;
    char caracterA = 'S';

    //Imprimir en pantalla las variables
    //%i, %d: para imprimir "int"
    printf("El valor de enteroA es: %i \n", enteroA);

    //%f: para imprimir "float" o "double"
    printf("El valor de flotanteA es: %f \n", flotanteA);
    printf("El valor de doubleA es: %f \n", doubleA);

    //%c: para imprimir "char"
    printf("El valor de caracterA es: %c \n", caracterA);

    return 0;
}
