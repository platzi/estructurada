#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Cadena de Caracteres.\n\n");

    char nameC[30];
    printf("Leer nombre con gets: ");
    //gets: permite leer una cadena incluyendo espacios y termina cuando lee el fin de linea: \n
    gets(nameC);

    printf("El nombre es: ");
    //puts: Imprime la cadena hasta que detecta el fin de linea \0 o \n.
    puts(nameC);

    return 0;
}
