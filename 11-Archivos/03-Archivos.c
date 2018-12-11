#include <stdio.h>

struct datosPersonales
{
	char nombre[20];
	char apellido[20];
	char sexo;
	int edad;
};

int main(void)
{
    printf("Archivos - Leer un archivo. \n\n");
	FILE *archivo;

	struct datosPersonales persona;
	archivo = fopen("DatosPersonales001.dat", "rb");

	if (archivo != NULL)
    {
		fread(&persona, sizeof(persona), 1, archivo);

		printf("Imprimir los datos. \n\n");
        printf("Nombre: %s \n", persona.nombre);
        printf("Apellido: %s \n", persona.apellido);
        printf("Sexo: %c \n", persona.sexo);
        printf("Edad: %d \n", persona.edad);

		fclose(archivo);
	}
	else
    {
        printf("No se ha podido abrir el archivo. \n");
    }
}
