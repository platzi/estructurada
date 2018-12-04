#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float altura;

    float area;
    float volumen;

    printf("Vamos a calcular el volumen de un cilindro!\n\n");
    printf("Ingresa el radio de la base: ");
    scanf("%f", &radio);

    area = radio * 3.1416;

    printf("Ingresa la altura del cilindro: ");
    scanf("%f", &altura);

    volumen = area * altura;

    printf("\nEl area de la base es: %f", area);
    printf("\nEl volumen del cilindro es: %f", volumen);

    return 0;
}
