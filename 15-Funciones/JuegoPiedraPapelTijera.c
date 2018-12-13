#include<stdio.h>
#include<stdlib.h>

char evaluar(int cpu, char op1, char op2, char op3)
{
    if(cpu == 1)
        return op1;
    if(cpu == 2)
        return op2;
    if(cpu == 3)
        return op3;
}

//e: empate, p: perdiste, g: ganaste
char jugar(int opc)
{
    int cpu = (rand() % 3) + 1;
    printf("Tu: %d vs CPU: %d\n\n", opc, cpu);
    switch(opc)
    {
        case 1:
            evaluar(cpu, 'e','p','g');
            break;
        case 2:
            evaluar(cpu, 'g','e','p');
            break;
        case 3:
            evaluar(cpu, 'p','g','e');
            break;
        case 4:
            exit(-1);
            break;
        default:
            return 'n';
            break;
    }
}

void notificar(char cal)
{
    switch(cal)
    {
        case 'e':
            printf("Empate.\n\n");
            break;
        case 'g':
            printf("Ganaste!\n\n");
            break;
        case 'p':
            printf("Perdiste :(\n\n");
            break;
        case 'n':
            printf("La opcion elegida no existe.\n\n");
            break;
    }
}

int main()
{
    printf("Piedra, papel y tijeras.\n\n");
    int op;
    char res;

    for(;;)
    {
        printf("Juega\n\n");
        printf("(1) piedra.\n");
        printf("(2) papel.\n");
        printf("(3) tijeras.\n");
        printf("(4) salir del juego.\n\n");

        printf("Elige una opcion: ");
        scanf("%d", &op);

        res = jugar(op);
        notificar(res);

        printf("Presiona una tecla para continuar.");
        getch();
    }

    return 0;
}
