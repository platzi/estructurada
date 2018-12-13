#include<stdio.h>

int main()
{
    printf("Operadores Logicos. \n\n");

    float valorA, valorB, valorC;
    valorA = 5;
    valorB = valorC = 10;

    // Operador AND - &&
    printf("Primer operador logico - AND.\n");
    if((valorA < valorB) && (valorB == valorC))
        printf("Se cumplen las dos condiciones.\n\n");
    else
        printf("El operador logico no se cumple\n\n");

    // Operador OR - ||
    printf("Segundo operador logico - OR.\n");
    if((valorA > valorB) || (valorA <= valorC))
        printf("Se cumple por lo menos una de las condiciones.\n\n");
    else
        printf("El operador logico no se cumple.\n\n");

    return 0;
}
