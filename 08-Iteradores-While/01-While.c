#include<stdio.h>

int main()
{
    printf("Iterador While.\n\n");

    int limite;
    printf("Hasta que numero quieres imprimir? ");
    scanf("%d", &limite);

    int i = 1;
    while(i <= limite)
    {
        printf("Numero: %d \n", i);
        i++;
    }

    return 0;
}
