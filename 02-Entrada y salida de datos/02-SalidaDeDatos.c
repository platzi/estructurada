#include <stdio.h>

int main()
{
    printf("Salida de datos. Parte 2. \n\n");

    int enteroA = 1;
    float flotanteA = 1.1;
    double doubleA = 1.1;
    char caracterA = 'S';

    //Imprimir varios valores juntos en una sola línea
    //Recordar, se crea el formato de la cadena completo y luego con parametros se asignan los valores.
    printf("\nPrimer valor: %d, segundo valor: %f tercer valor: %f, cuarto valor: %c\n", enteroA, flotanteA, doubleA, caracterA);

    //Imprimir los mismos valores con un solo comando en varias lineas
    printf("\nPrimer valor: %d \nsegundo valor: %f \ntercer valor: %f \ncuarto valor: %c\n", enteroA, flotanteA, doubleA, caracterA);

    return 0;
}
