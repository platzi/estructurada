#include<stdio.h>

//declarar la funcion calcularSuma() arriba de la funcion main(). main() no puede encontrar funciones o variables que sean declarados debajo de ella.
void calcularSuma()
{
    int res = 5 + 8;
    printf("El resultado de la suma es: %d\n", res);
}

int main()
{
    printf("Funciones - Calculadora parte 1.\n\n");
    calcularSuma();

    return 0;
}
