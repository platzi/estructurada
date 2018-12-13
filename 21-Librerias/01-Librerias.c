#include<stdio.h>
//Agregamos la libreria que contiene las funciones que necesitamos para la calculadora
//Se escribe entre comillas ("operaciones.h") porque se encuentra en el mismo directorio que el codigo fuente
#include "operaciones.h"

//Las funciones no existen en este codigo, se llaman desde la libreria operaciones.h
int main()
{
    float primerValor = 10, segundoValor = 15, resultado;
    int opcion;

    printf("Calculadora.\n\n");
    printf("¿Que operacion quieres realizar?\n");
    printf("1. Suma.\n");
    printf("2. Resta.\n");
    printf("3. Multiplicacion.\n");
    printf("4. Division.\n\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            resultado = sumar(primerValor, segundoValor);
            break;
        case 2:
            resultado = restar(primerValor, segundoValor);
            break;
        case 3:
            resultado = multiplicar(primerValor, segundoValor);
            break;
        case 4:
            resultado = dividir(primerValor, segundoValor);
            break;
        default:
            printf("No existe la opcion elegida.\n");
        break;
    }

    printf("El resultado de la operacion es: %f \n\n", resultado);
    return 0;
}
