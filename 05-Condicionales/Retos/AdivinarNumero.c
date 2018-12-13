#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 5;
    int intento;

    printf("Adivina el numero entre el 1 y el 10 que estoy pensando!");
    printf("\n\n");
    scanf("%i", &intento);

    if(numero == intento)
    {
        printf("\nAdivinaste!");
    }else
    {
        printf("\nEse no es perdiste!");

    }
    return 0;
}
