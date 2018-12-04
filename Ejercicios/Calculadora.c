#include<stdio.h>

float sumar(float valorA, float valorB)
{ return valorA + valorB; }

float restar(float valorA, float valorB)
{ return valorA - valorB; }

float multiplicar(float valorA, float valorB)
{ return valorA * valorB; }

float dividir(float valorA, float valorB)
{ return valorA / valorB; }

float calcularModulo(int valorA, int valorB)
{ return valorA % valorB; }

float calcularExponente(float valorA, float valorB)
{
    float res = valorA;
    for(int i = 1; i < valorB; i++)
        res = res * valorA;
    return res;
}

int main()
{
    float primerValor;
    float segundoValor;
    float resultado;
    int opcion;

    for(;;)
    {
        printf("Calculadora.\n\n");
        printf("¿Que operacion quieres realizar?\n");
        printf("1. Suma.\n");
        printf("2. Resta.\n");
        printf("3. Multiplicacion.\n");
        printf("4. Division.\n");
        printf("5. Exponente.\n");
        printf("6. Modulo.\n");
        printf("7. Salir del programa.\n\n");

        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        if(opcion > 0 && opcion < 7)
        {
            printf("Primer valor: ");
            scanf("%f", &primerValor);

            printf("Segundo valor: ");
            scanf("%f", &segundoValor);
        }

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
            case 5:
                resultado = calcularExponente(primerValor, segundoValor);
                break;
            case 6:
                resultado = calcularModulo(primerValor, segundoValor);
                break;
            case 7:
                exit(-1);
                break;

            default:
                printf("No existe la opcion elegida.\n");
                break;
        }
        printf("El resultado de la operacion es: %f \n\n", resultado);
    }

    return 0;
}
