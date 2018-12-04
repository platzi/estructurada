#include<stdio.h>

int main()
{
    printf("Condicion if. \n\n");

    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC = 150;

    printf("Primer if. \n");
    if(valA == valB)
        printf("No se cumple la primer condicion.\n\n");
    else if(valB == valC)
        printf("No se cumple la segunda condicion.\n\n");
    else
    {
        printf("Ninguna condicion se cumplio.\n");
        printf("Despues de esta linea el programa va a terminar.\n\n");
    }

    return 0;
}
