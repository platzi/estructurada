#include <stdio.h>

int main()
{
    int x;
    printf("Ingresa el valor: \n");
    scanf("%d", &x);

    x %=  5;
    x++;

    printf("x: %d \n", x);

    return 0;
}
