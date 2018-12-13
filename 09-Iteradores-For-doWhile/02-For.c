#include<stdio.h>

int main()
{
    printf("Iterador For.\n\n");

    int limSup, limInf;

    printf("Imprimir en orden descendiente.\n");

    printf("Ingresa el limite superior: ");
    scanf("%d", &limSup);

    printf("Ingresa el limite inferior: ");
    scanf("%d", &limInf);

    printf("\n");
    for(int i = limSup; i >= limInf; i--)
    {
        printf("Numero: %d \n", i);
    }

    return 0;
}
