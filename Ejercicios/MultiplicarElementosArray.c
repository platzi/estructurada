#include<stdio.h>

int main()
{
    printf("Multiplicar todos los elementos de un arreglo:\n\n");

    int tam;
    int res;

    printf("Tamaño del arreglo: ");
    scanf("%d", &tam);

    int elementos[tam];

    printf("Ingresa los valores:\n");

    for(int i = 0; i < tam; i++)
    {
        printf("Valor[%d]: ", i);
        scanf("%d", &elementos[i]);
    }

    res = elementos[0];
    for(int i = 1; i < tam; i++)
        res *= elementos[i];

    printf("\nEl resultado es: %d\n", res);

    return 0;
}
