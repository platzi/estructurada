#include<stdio.h>
#include<string.h>

int main()
{
    printf("Sustituir vocales por la letra Z.\n\n");

    char nombre[50];
    printf("Ingresa un nombre:");
    gets(nombre);

    printf("Nombre sin vocales: ");

    for(int i = 0; i < strlen(nombre); i++)
    {
        if(nombre[i] == 'a' || nombre[i] == 'e' || nombre[i] == 'i' || nombre[i] == 'o' || nombre[i] == 'u')
        {
            printf("z");
        }
        else if(nombre[i] == 'A' || nombre[i] == 'E' || nombre[i] == 'I' || nombre[i] == 'O' || nombre[i] == 'U')
        {
            printf("Z");
        }else
        {
            printf("%c", nombre[i]);
        }
    }

    return 0;
}
