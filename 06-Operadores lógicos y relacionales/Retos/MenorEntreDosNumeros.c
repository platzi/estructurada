#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;

    printf("Si me das dos numeros enteros, te dare el menor entre ellos!");
    printf("\n\nIngresa el primer numero: ");
    scanf("%i", &primerNumero);

    printf("Ingresa el segundo numero: ");
    scanf("%i", &segundoNumero);

    if(primerNumero < segundoNumero)
    {
        printf("\nEl numero menor es: %i", primerNumero);
    }else
    {
        printf("\nEl numero menor es: %i", segundoNumero);
    }

    return 0;
}
