#include<stdio.h>

int main()
{
    printf("Array Bidimesional - Suma de filas\n\n");

    /*Crea un arreglo de 3 filas por 4 columnas en donde:
    1.Los elementos de la primer fila sumen un total de 4.
    2.Los elementos de la segunda fila sumen un total de 10.
    3.Los elementos de la tercer fila sumen un total de 26.

    4. Imprime las sumatorias de cada fila*/

    int res;
    int arrayB[3][4] = {  { 1, 1, 1, 1},
                          { 2, 2, 3, 3},
                          { 6, 6, 6, 8}};

    res = arrayB[0][0] + arrayB[0][1] + arrayB[0][2] + arrayB[0][3];
    printf("Primer fila: \t%d \n", res);

    res = arrayB[1][0] + arrayB[1][1] + arrayB[1][2] + arrayB[1][3];
    printf("segunda fila: \t%d \n", res);

    res = arrayB[2][0] + arrayB[2][1] + arrayB[2][2] + arrayB[2][3];
    printf("Tercer fila: \t%d \n", res);

    return 0;
}
