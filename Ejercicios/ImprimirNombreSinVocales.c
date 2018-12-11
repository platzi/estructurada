#include<stdio.h>
#include<string.h>

int main()
{
    printf("Imprimir nombre sin vocales.\n\n");

    char nombre[50];
    printf("Ingresa un nombre:");
    gets(nombre);

    printf("Nombre sin vocales: ");

    for(int i = 0; i < strlen(nombre); i++)
        if(nombre[i] != 'a' && nombre[i] != 'e' && nombre[i] != 'i' && nombre[i] != 'o' && nombre[i] != 'u')
            if(nombre[i] != 'A' && nombre[i] != 'E' && nombre[i] != 'I' && nombre[i] != 'O' && nombre[i] != 'U')
                printf("%c", nombre[i]);

    return 0;
}
