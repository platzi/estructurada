#include<stdio.h>

float calcularExponente(float valorA, float valorB)
{
    float res = valorA;
    for(int i = 1; i < valorB; i++)
        res = res * valorA;
    return res;
}

int main()
{
    printf("Potencia de un numero.\n\n");
    float valA, valB, res;

    printf("Base: ");
    scanf("%f", &valA);

    printf("Exponente: ");
    scanf("%f", &valB);

    res = calcularExponente(valA, valB);

    printf("El resultado es: %f \n\n", res);

    return 0;
}
