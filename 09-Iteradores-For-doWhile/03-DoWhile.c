#include<stdio.h>

int main()
{
    printf("Iterador Do - While.\n\n");

    char respuesta = 'q';
    char valor;

    do
    {
       printf("Ingresa una letra: ");
       scanf(" %c", &valor);
    }
    while(valor != respuesta);

    printf("\ncoinciden: %c == %c \n", valor, respuesta);

    return 0;
}
