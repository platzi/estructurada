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
    printf("Estructuras de Datos.\n\n");
    struct datosPersonales persona;

    printf("Leer Datos:\n");
    printf("\nIngresa nombre:\n");
    gets(persona.nombre);

    printf("\nIngresa apellido:\n");
    gets(persona.apellido);

    printf("\nIngresa sexo ((f)femenino/(m)masculino): \n");
    scanf("%c", &persona.sexo);

    printf("\nIngresa edad: \n");
    scanf("%d", &persona.edad);

    printf("\nImprimir Datos:\n");
    printf("%s \n", persona.nombre);
    printf("%s \n", persona.apellido);
    printf("%c \n", persona.sexo);
    printf("%d \n", persona.edad);
}
