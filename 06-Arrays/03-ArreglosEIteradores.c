#include<stdio.h>

int main()
{
    printf("Arreglos e Iteradores.\n\n");

    int listaEnteros[11];

    for(int i = 0; i <= 11; i++)
    {
        listaEnteros[i] = i*i;
        printf("valor (%d): %d \n", i, listaEnteros[i]);
    }

    return 0;
}
