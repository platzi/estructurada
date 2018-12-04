#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calificacion;

    printf("Para saber si aprobo o no ingresa tu calificacion: ");
    scanf("%i", &calificacion);

    if(calificacion < 60)
    {
        printf("\nLo siento pero reprobaste");
    }else if(calificacion >= 90)
    {
        printf("\nExcelente trabajo aprobaste! n.n");
    }else
    {
        printf("\nAprobaste");
    }

    return 0;
}
