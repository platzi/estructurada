#include<stdio.h>

//La funcion reescribe la variable a la que se hace referencia en el tercer parametro.
void calcularMultiplicacion(int valorA, int valorB, int *resultado)
{
    *resultado = valorA * valorB;
}

//Se asigna el valor de res desde la funcion con un apuntador.
int main()
{
    printf("Funciones - Calculadora parte 3.\n");
    printf("Parametros - Paso de referencia.\n\n");

    int res;

    calcularMultiplicacion(12, 12, &res);
    printf("El resultado de la multiplicacion es: %d\n", res);

    calcularMultiplicacion(-34, 8, &res);
    printf("El resultado de la multiplicacion es: %d\n", res);

    return 0;
}
