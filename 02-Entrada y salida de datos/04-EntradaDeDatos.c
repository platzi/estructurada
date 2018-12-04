#include <stdio.h>

int main()
{
    printf("Entrada de datos Parte 2\n\n");

    int enteroA;
    float flotanteA;
    char caracterA;

    //Imprime en pantalla, no lleva salto de linea para que la lectura sea en el mismo renglon
    printf("Ingresa el valor de enteroA es: ");
    //scanf: scan-format.
    //%i: para leer un entero.
    //&enteroA: para asignar el valor registrado en la variable
    scanf("%i", &enteroA);

    printf("Ingresa el valor de flotanteA es: ");
    //%f: para leer un float.
    scanf("%f", &flotanteA);

    printf("Ingresa el valor de caracterA es: ");
    //%c: para leer un char.
    scanf(" %c", &caracterA);

    printf("\n\n");
    printf("enteroA: %d\n", enteroA);
    printf("flotanteA: %f\n", flotanteA);
    printf("caracterA: %c\n", caracterA);

    return 0;
}
