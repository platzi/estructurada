#include <stdio.h>
#include <string.h>

struct datosPersonales
{
	char nombre[20];
	char apellido[20];
	char sexo;
	int edad;
};

int main(void)
{
    printf("Archivos - Guardar en un archivo. \n\n");
    struct datosPersonales persona;

	FILE *archivo;
	archivo = fopen("DatosPersonales001.dat", "wb");

	if (archivo != NULL)
    {
        fflush (stdin);
        printf("Nombre: \n");
        gets(persona.nombre);

        printf("\nApellido: \n");
        gets(persona.apellido);

        printf("\nSexo (f)/(m): \n");
        scanf("%c", &persona.sexo);

        printf("\nEdad: \n");
        scanf("%d", &persona.edad);

        printf("\nVerificar que el archivo ha sido creado.\n");
        printf("\nImprimir Datos:\n");
        printf("%s \n", persona.nombre);
        printf("%s \n", persona.apellido);
        printf("%c \n", persona.sexo);
        printf("%d \n", persona.edad);

        fwrite(&persona, sizeof(persona), 1, archivo);

		fclose(archivo);
	}
	else
    {
        printf("No se ha podido crear el archivo. \n");
    }
}
