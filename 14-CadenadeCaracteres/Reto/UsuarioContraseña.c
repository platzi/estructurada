#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char userIDs[] = {"user"};
    char passwordIDs[] = {"password"};
    char inputUser[10];
    char inputPassword[10];

    int userSize = strlen(userIDs);
    int passwordSize = strlen(passwordIDs);

    int itt = 0;

    printf("Para entrar por favor ingresar su usuario:\n");
    gets(inputUser);

    for(int  i = 0; i < userSize; i++)
       if(inputUser[i] == userIDs[i])
        itt++;

    if(itt == userSize)
        printf("\nUsuario correcto.\n\nEscribe el password por favor:\n");
    else
    {
        printf("\nUsuario incorrecto, se cerrara el programa.\n");
        exit(-1);
    }

    itt = 0;
    gets(inputPassword);

    for(int  i = 0; i < passwordSize; i++)
        if(inputPassword[i] == passwordIDs[i])
            itt++;

    if(itt == passwordSize)
        printf("\nPassword correcto, felicidades ha accedido!\n");
    else
        printf("\nPassword incorrecto, cierre el programa intente de nuevo\n");

    return 0;
}
