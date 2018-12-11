#include<stdio.h>
#include<string.h>

int main()
{
    printf("Invertir la frase.\n\n");

    char frase[50];
    char invertida[50];

    printf("Ingresa una frase: \n");
    gets(frase);

    for(int i = 0; i < strlen(frase); i++)
        invertida[i] = frase[(strlen(frase) - 1) - i];

    puts(invertida);

    return 0;
}
