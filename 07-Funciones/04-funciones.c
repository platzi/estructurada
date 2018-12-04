#include<stdio.h>

float calcularDivision(float valorA, float valorB)
{
    float res = valorA / valorB;
    return res;
}

int main()
{
    printf("Funciones - Calculadora parte 4.\n\n");

    float res;
    res = calcularDivision(144, 12);
    printf("El resultado de la multiplicacion es: %f\n", res);

    res = calcularDivision(-22, 5);
    printf("El resultado de la multiplicacion es: %f\n", res);

    return 0;
}
