#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite = 9;
    int anterior = 1;
    int siguiente = 1;
    int actual = 0;

    printf("\n%i", anterior);

    for(int i = 1; i < limite; i++)
    {
        actual = anterior + siguiente;
        anterior = siguiente;
        siguiente = actual;

        printf("\n%i", actual);
    }

    return 0;
}
