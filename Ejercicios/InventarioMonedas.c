#include<stdio.h>

int main()
{
    printf("Inventario de Monedas.\n");

    int monedasCobre = 0, monedasPlata = 0, monedasOro = 0, monedas = 0, tempMonedas = 0;

    for(;;)
    {
        printf("(Escribe un numero negativo para salir del programa)\n\n");
        printf("Cuantas monedas de cobre quieres agregar: ");
        scanf("%d", &monedas);

        if(monedas < 0)
            exit(-1);

        monedasCobre += monedas;

        if(monedasCobre >= 100)
        {
            monedasPlata += monedasCobre / 100;
            monedasCobre = monedasCobre % 100;
        }

        if(monedasPlata >= 100)
        {
            monedasOro += monedasPlata / 100;
            monedasPlata = monedasPlata % 100;
        }

        printf("Tienes un total de %d moneda(s) de cobre. \n", monedasCobre);
        printf("Tienes un total de %d moneda(s) de plata. \n", monedasPlata);
        printf("Tienes un total de %d moneda(s) de oro. \n\n", monedasOro);
    }

    return 0;
}
