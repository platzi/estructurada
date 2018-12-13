#include<stdio.h>

char nombreAlumno[50];
float calif;

void evaluar()
{
    if(calif >= 7.0)
        printf("El alumno %s ha sido aprobado. \n\n", nombreAlumno);
    else
        printf("El alumno %s ha sido reprobado. \n\n", nombreAlumno);
}

int main()
{
    printf("Calificacion.\n\n");
    printf("Ingresa el nombre: ");

    gets(nombreAlumno);

    printf("Ingresa la calificacion: ");
    scanf("%f", &calif);

    evaluar(nombreAlumno, calif);

    return 0;
}
