#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float volumen;

    printf("Vamos a calcular el volumen de una esfera! \n");
    printf("Ingresa el valor del radio de la esfera: ");
    scanf("%f", &radio);

    volumen = ((4) * 3.1416 * (radio * radio * radio))/3;

    printf("El volumen de la esfera es: %f", volumen);

    return 0;
}
