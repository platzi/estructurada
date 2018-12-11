#include<stdio.h>
#include<string.h>


void comprobarPalindromo(char frase[])
{
    char tempString[50];
    int ajuste = 0;
    int contador = 0;

    for(int i = 0; i <= strlen(frase); i++)
    {
        if(i == strlen(frase))
            tempString[i - ajuste] == '\n';

        if(frase[i] == ' ' || frase[i] == '.' || frase[i] == '?' || frase[i] == ',' || frase[i] == '¿')
            ajuste++;
        else
            tempString[i - ajuste] = frase[i];
    }

    puts(frase);

    for(int i = 0; i < strlen(tempString); i++)
    {
        printf("-%c==%c", tempString[i], tempString[strlen(tempString)-(1 + i)]);
        if(tempString[i] == tempString[strlen(tempString)-(1 + i)])
        {
            contador++;
            if(contador == strlen(tempString))
                printf("\nSi es un palindromo: %d comparaciones correctas.\n\n", contador);
        }
        else
        {
            printf("\nNo es un palindromo\n\n");
            break;
        }
    }
}

int main()
{
    printf("Palindromos.\n\n");

    char fraseA[] = {"a cavar a caravaca"};
    char fraseB[] = {"anita, la gorda lagartona, no traga la droga latina."};
    char fraseC[] = {"programar es muy divertido"};

    comprobarPalindromo(fraseA);
    comprobarPalindromo(fraseB);
    comprobarPalindromo(fraseC);

    return 0;
}
