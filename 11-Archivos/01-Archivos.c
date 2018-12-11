#include <stdio.h>

int main(void)
{
    printf("Archivos - Crear un archivo. \n\n");

	// Declaramos la variable file como puntero del tipo FILE.
	FILE *archivo;

	// Creamos archivo001.dat y guardamos su direccion en el apuntador "archivo".
	archivo = fopen("archivo001.dat", "w");

    if(archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que ha sido creado.\n");
        fclose(archivo);
    }
    else
    {
        printf("El archivo no se ha creado.\n");
    }

    return 0;
}
