#include<stdio.h>

int main()
{
    printf("Switch. \n\n");

    int opcion;

    printf("Ingresa la opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            printf("\nElegiste el numero uno.\n\n");
            break;
        case 2:
            printf("\nElegiste el numero dos.\n\n");
            break;
        case 3:
            printf("\nElegiste el numero tres.\n\n");
            break;
        default:
            printf("\nElegiste una opcion sin valor.\n\n");
            break;
    }

    return 0;
}
