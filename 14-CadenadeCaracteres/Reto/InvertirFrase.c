#include<stdio.h>
#include<string.h>

int main()
{
    printf("Invertir la frase.\n\n");

    char frase[50];

    printf("Ingresa una frase: \n\n");

    gets(frase);

    for(int i = 0; i < strlen(frase); i++)
    {
        printf("%c", frase[(strlen(frase) - 1) - i]);
    }

    return 0;
}
