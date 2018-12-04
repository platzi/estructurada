#include<stdio.h>

int main()
{
    printf("Arreglos unidimensionales.\n\n");

    int listaEnteros[3];
    listaEnteros[0] = 4;
    listaEnteros[1] = 5;
    listaEnteros[2] = 6;

    float listaFlotantes[] = {23.4, 34.5, 45.6, 45.6, 56.7};

    char listaCaracteres[4];
    listaCaracteres[0] = 'D';
    listaCaracteres[1] = 'a';
    listaCaracteres[2] = 'n';
    listaCaracteres[3] = 'i';

    printf("\nPrimer entero: \t\t %d", listaEnteros[0]);
    printf("\nUltimo flotante: \t %f", listaFlotantes[4]);
    printf("\nLista de caracteres: \t %c%c%c%c. \n", listaCaracteres[0], listaCaracteres[1], listaCaracteres[2], listaCaracteres[3]);

    printf("\n");

    return 0;
}
