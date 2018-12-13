#include <stdio.h>
#include <stdlib.h>

int main()
{
    int caminoElegido;

    printf("Te encuentras en un sueño y tienes tres caminos.");
    printf("\nEscribe 1 si quieres ir por el camino de dulces");
    printf("\nEscribe 2 si quieres ir por el camino de madera");
    printf("\nEscribe 3 si quieres ir por el camino de gatitos");
    printf("\n\n");

    scanf("%i", &caminoElegido);

    switch(caminoElegido)
    {
        case 1:
            printf("\nLos dulces se empiezan a derretir y te quedas pegado entre tanto caramelo");
            break;

        case 2:
            printf("\nLas astillas de madera entran en tus pies y no puedes seguir caminando!");
            break;

        case 3:
            printf("\nLos gatitos lindos te llevan una puerta y al cruzarla te despiertas! \nFelicidades!");
            break;

        default:
            printf("\nAl no elegir una opcion valida te quedas vagando eternamente en tu sueno");
            break;
    }
}
