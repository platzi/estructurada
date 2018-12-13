#include<stdio.h>

int main()
{
    printf("Operadores de incremento y decremento. \n\n");

    int val, res;

    //Incremento - sufijo------------------------------
    val = 25;
    // Primero asigna y luego incrementa.
    res = val++;
    printf("resultado: %d\n", res);

    //Incremento - prefijo ----------------------------
    val = 25;
    //Primero incrementa y luego asigna.
    res = ++val;
    printf("resultado: %d\n", res);

    //Decremento - sufijo -----------------------------
    val = 25;
    //Primero asigna y luego incrementa.
    res = val--;
    printf("resultado: %d\n", res);

    //Decremento - prefijo ----------------------------
    val = 25;
    //Primero incrementa y luego asigna.
    res = --val;
    printf("resultado: %d\n", res);


    return 0;
}
