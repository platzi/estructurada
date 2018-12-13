#include<stdio.h>

int main()
{

    printf("Array Bidimesional - Promedio de calificaciones.\n\n");

    /*
    Crea un arreglo de 5 filas por 6 columnas en donde:

    1.Los  primeros 5 elementos cada fila tengan calificaciones aprobatorias entre 6 y 10.
    2.El sexto elemento de cada fila debe ser 0.

    Despues:

    3.Calcula el promedio de los primeros 5 elmentos de cada fila y asignalo al sexto elemento.
    4.Imprime el promedio de cada fila de calificaciones.
    */

    float arrayB[5][6] = {  { 6, 7, 6, 7, 8, 0},
                            { 8, 8, 7, 9, 7, 0},
                            {10, 10, 9, 10, 8, 0},
                            { 10, 9, 9, 9, 8, 0},
                            { 8, 7, 6, 7, 8, 0} };


    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(j < 5)
            {
                arrayB[i][5] += arrayB[i][j];
                printf("La sumatoria de arrayB[%d][5], es: %f \n", i, arrayB[i][5]);
            }
            else
            {
                arrayB[i][j] /= 5;
                printf("\n\tEl promedio de la fila %d, es: %f\n\n", i, arrayB[i][j]);
            }
        }
    }

    return 0;
}
