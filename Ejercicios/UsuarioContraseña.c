#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userIDs[4] = {'u','s','e','r'};
    char passwordIDs[] = {'p','a','s','s','w','o','r','d'};
    char inputUser[0] = {};
    char inputPassword[0] = {};

    int userSize = sizeof(userIDs)/sizeof(userIDs[0]);
    int passwordSize = sizeof(passwordIDs)/sizeof(passwordIDs[0]);

    int itt = 0;

    printf("Para entrar por favor ingresar su usuario:\n ");

    scanf(" %c", &inputUser[0]);
    scanf(" %c", &inputUser[1]);
    scanf(" %c", &inputUser[2]);
    scanf(" %c", &inputUser[3]);

    for(int  i = 0; i < userSize; i++)
    {
       if(inputUser[i] == userIDs[i])
       {

        itt++;
       }
    }

    if(itt == userSize)
    {
        printf("\n Usuario correcto, escriba el password por favor");
    }else{
        printf(" \n Usuario incorrecto, cierre el programa intente de nuevo");
    }

    itt = 0;

    for(int  i = 0; i < passwordSize; i++)
    {
        scanf(" %c", &inputPassword[i]);
    }


    for(int  i = 0; i < passwordSize; i++)
    {
       if(inputPassword[i] == passwordIDs[i])
       {
           itt++;

       }
    }

    if(itt == passwordSize)
    {
         printf("\n Password correcto, felicidades ha accedido!");
    }else{
            printf(" \n Password incorrecto, cierre el programa intente de nuevo");
   }


    return 0;
}
