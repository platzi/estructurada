#include <stdio.h>

int main(void)
{
    printf("Archivos - Crear un archivo. \n\n");

	// Declaramos la variable file como puntero del tipo FILE.
	FILE *pFile;

	// Creamos empleados.dat y guardamos su direccion.
	pFile = fopen("archivo03.dat", "w");

    if(pFile != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que ha sido creado.\n");
        fclose(pFile);
    }
    else
    {
        printf("El archivo no se ha creado.\n");
    }


    return 0;
}
