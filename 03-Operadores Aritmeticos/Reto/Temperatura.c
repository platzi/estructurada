#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheitTemp;
    float celsiusTemp;

    printf("Hola! Vamos a transformar grados Fahrenheit a grados Celsius \n");
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheitTemp);

    celsiusTemp = ((fahrenheitTemp - 32) *5)/9;

    printf("\nLa temperatura en grados Celsius es: %f", celsiusTemp);

    return 0;
}
