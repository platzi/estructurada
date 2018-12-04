#include<stdio.h>

void evaluar(char nombre[], float cal)
{
    if(cal >= 7.0)
        printf("El alumno %s ha sido aprobado. \n\n", nombre);
    else
        printf("El alumno %s ha sido reprobado. \n\n", nombre);

}

int main()
{
    printf("Calificacion.\n\n");
    char nombreAlumno[50];
    float calif;

    printf("Ingresa el nombre: ");
    gets(nombreAlumno);

    printf("Ingresa la calificacion: ");
    scanf("%f", &calif);

    evaluar(nombreAlumno, calif);

    return 0;
}
