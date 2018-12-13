#include<stdio.h>

// La funcion recibe 2 parametros para realizar los calculos.
void calcularResta(int valorA, int valorB)
{
    int res = valorA - valorB;
    printf("El resultado de la resta es: %d\n", res);
}

int main()
{
    printf("Funciones - Calculadora parte 2.\n");
    printf("Parametros - Paso de valor.\n\n");

    calcularResta(5, 3);
    calcularResta(123, -187);
    calcularResta(54, 32);

    return 0;
}
