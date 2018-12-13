#include<stdio.h>

int main()
{
    printf("Borrar la palabra Ball.\n\n");

    char frase[50];
    char fraseTemp[50];
    int ajuste = 0;

    printf("Ingresa una frase: \n");
    gets(frase);

    //strlen - longitud de la cadena
    for(int i = 0, j = 0; i <= strlen(frase); i++)
    {
        if(i == strlen(frase))
            fraseTemp[i-ajuste] = '\n';

        if(frase[i] == 'b' && frase[i+1] == 'a' && frase[i+2] == 'l' && frase[i+3] == 'l')
        {
            i += 3;
        }
        else
        {
            printf("%c-", frase[i]);
            fraseTemp[j] = frase[i];
            j++;
        }
    }

    printf("\nImprimir: \n");
    puts(fraseTemp);

    return 0;
}
