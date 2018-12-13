#include<stdio.h>

int main()
{
    printf("Operadores de asignacion");

    int valor;

    // = : Se asigna el numero 10
    valor = 11;
    //Imprime y salta a la siguiente linea
    printf("Resultado (=):\t %d \n", valor);

    // += : suma y asigna.
    valor += 1;
    printf("Resultado (+=):\t %d \n", valor);

    // -= : resta y asigna.
    valor -= 2;
    printf("Resultado (-=):\t %d \n", valor);

    // *= : multiplica y asigna.
    valor *= 4;
    printf("Resultado (*=):\t %d \n", valor);

    // /= : divide y asigna.
    valor /= 5;
    printf("Resultado (/=):\t %d \n", valor);

    // /= : opera mod y asigna.
    valor %= 6;
    printf("Resultado (%=):\t %d \n", valor);

    return 0;
}
