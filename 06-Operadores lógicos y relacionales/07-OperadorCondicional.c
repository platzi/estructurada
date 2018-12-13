#include<stdio.h>

int main()
{
    printf("Operador condicional. \n\n");

    float valor1 = 5, valor2 = 10;
    char resSi = 'S', resNo = 'N', resultado;

    resultado = (valor1 == valor2) ? resSi : resNo;

    printf("El valor es: %c \n", resultado);

    return 0;
}
