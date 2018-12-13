#include<stdio.h>

int main()
{
    printf("Operadores Relacionales. \n\n");

    float valorA, valorB;
    valorA = 5;
    valorB = 10;

    // < : menor que.
    //Si el valorA es menor que el valorB imprime cierto, si no es cierto, entonces imprime falso.
    if(valorA < valorB)
        printf("Pregunta 1: Cierto\n");
    else
        printf("Pregunta 1: Falso\n");

    // <= : menor o igual que.
    if(valorA <= valorB)
        printf("Pregunta 2: Cierto\n");
    else
        printf("Pregunta 2: Falso\n");

    // > : mayor que.
    if(valorA > valorB)
        printf("Pregunta 3: Cierto\n");
    else
        printf("Pregunta 3: Falso\n");

    // >= : mayor o igual que.
    if(valorA >= valorB)
        printf("Pregunta 4: Cierto\n");
    else
        printf("Pregunta 4: Falso\n");

    // == : igual que
    if(valorA == valorB)
        printf("Pregunta 5: Cierto\n");
    else
        printf("Pregunta 5: Falso\n");

    // != : diferente de
    if(valorA != valorB)
        printf("Pregunta 6: Cierto\n");
    else
        printf("Pregunta 6: Falso\n");

    return 0;
}
