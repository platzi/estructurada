#include<stdio.h>

int factorial(int n)
{
    printf("Entra a la funcion factorial, n vale: %d \t", n);

    if (n > 1)
    {
        //Si n es mayor a 1, entonces se vuelve a llamar la funcion que multiplica a n * (n -1)
        printf("La funcion se llamara a si misma otra vez.\n");
        return n * factorial(n-1);
    }
    else
    {
        //Si n es igual 1, ya no se llama la funcion a si misma para terminar la recursividad.
        printf("n es igual a 1, termina la recursividad.\n");
        return 1;
    }
}

int main()
{
    printf("Recursividad - Factorial.\n\n");

    int res = factorial(5);
    printf("\nEl resultado es: %d \n\n", res);

    return 0;
}
