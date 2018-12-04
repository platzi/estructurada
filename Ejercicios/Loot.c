#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandomInt();

int randomNumber;

int main()
{
    GetRandomInt();

    return 0;
}

int GetRandomInt()
{
    srand (time(NULL));

    randomNumber = rand() % 10 + 1;

    printf("%i", randomNumber);

    return 0;
}
