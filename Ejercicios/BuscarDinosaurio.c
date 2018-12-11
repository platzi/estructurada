#include<stdio.h>
#include<string.h>

int main()
{
    printf("Buscar la palabra dinosaurio.\n\n");

    char dino[] = {"dinosaurio"};
    char frase[100];
    int contador, indice, existe = 0;

    printf("Ingresa una oracion: \n");
    gets(frase);
    printf("\n");

    for(int i = 0; i < strlen(frase); i++)
    {
        contador = 0;
        indice = i;

        for(int j = 0; j < strlen(dino); j++)
        {
            if(frase[indice] == dino [j])
            {
                contador++;
                indice++;
            }
            else
            {
                j = strlen(dino);
            }

            if(contador == strlen(dino))
            {
                printf("La palabra existe en la posicion: %d\n", i);
                existe = 1;
            }
        }
    }

    if(existe == 0)
        printf("No existe la palabra en la oracion. \n\n");

    return 0;
}
