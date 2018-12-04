#include<stdio.h>

int main()
{
    printf("Operadores Aritmeticos P2 \n\n");

    // Constantes enteras y float con asignacion de valores
    const int valorIntA = 10, valorIntB = 20;
    const float valorFloatA = 10.5, valorFloatB = 20.51;

    // Variables
    int resInt;
    float resFloat;

    // entero = entero + float :: El resultado es int.
    resInt = valorIntA + valorFloatA;
    printf("Suma:\t\t %d \n", resInt);

    // float = (entero * 2) - float :: El resultado es float
    resFloat = (valorIntB * 2) - valorFloatB;
    printf("Resta:\t\t %f \n", resFloat);

    //Reutilizo la variable resInt
    // int = int * int :: Eresultado es int
    resInt = valorIntA * valorIntB;
    printf("Multiplicacion:\t %d \n", resInt);

    //Reutilizo la variable resFloat
    // float = float / float :: Eresultado es float
    resFloat = valorFloatA / valorFloatB;
    printf("division float:\t %f \n", resFloat);

    return 0;
}
