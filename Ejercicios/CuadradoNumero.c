#include<stdio.h>

float calcularCuadrado(float valor)
{
    return valor * valor;
}

int main()
{
    printf("Potencia de un numero.\n\n");
    float val, res;

    printf("Base: ");
    scanf("%f", &val);

    res = calcularCuadrado(val);

    printf("El cuadrado de %f es: %f \n\n", val, res);

    return 0;
}
