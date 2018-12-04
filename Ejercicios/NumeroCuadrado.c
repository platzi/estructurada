#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNumber;
    printf("Vamos a sacar el cuadrado de un numero!");
    printf("\nEscribe el numero:");
    scanf("%i", &inputNumber);

    inputNumber *= inputNumber;

    printf("\n%i", inputNumber);

    return 0;
}
