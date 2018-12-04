#include<stdio.h>

int main()
{
    printf("Condicion if. \n\n");

    float valA, valB, valC;
    valA = 50;
    valB = 100;

    printf("Primer condicion. \n");
    if(valA == valB)
        printf("Ambos son iguales.\n\n");
    else
        printf("Los valores son diferentes.\n\n");

    printf("Segunda condicion. \n");
    if(valA == valB)
    {
        printf("Ambos son iguales\n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es: %f\n", valC);
    }
    else
    {
        printf("Los valores son diferentes\n");
        valC = valA - valB;
        printf("Ademas la resta de ambos numeros es: %f\n", valC);
    }

    return 0;
}
