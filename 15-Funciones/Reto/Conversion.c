#include <stdio.h>
#include <stdlib.h>

float ConvertUSD(float usd)
{
    float result;

    result = (usd * 20.57)/1;

    return result;
}

float ConvertMXN(float mxn)
{
    float result;

    result = (mxn * 0.049)/1;

    return result;
}

int main()
{
    char inputAnswer;
    float inputAmmount;

    printf("Vamos a convertir cantidades de dinero");
    printf("\nSi quieres convertir de dolares a pesos presiona P");
    printf("\nSi quieres convertir de pesos a dolares presiona D");

    scanf("%c", &inputAnswer);

    printf("\nEscribe la cantidad que quieres cambiar");

    scanf("%f", &inputAmmount);

    if(inputAnswer == 'P')
    {
        printf("El resultado es: %f", ConvertUSD(inputAmmount));
    }else if(inputAnswer == 'D')
    {
        printf("El resultado es: %f", ConvertMXN(inputAmmount));
    }


    return 0;
}






