//Davi de Sousa Costa
#include <stdio.h>

int main (void)
{
    int p = 0, contP = 0, contG = 0, contI = 0, contE = 0, g1, g2;

    while (p != 2)
    {
        scanf("%i %i", &g1, &g2);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &p);
        contP ++;
        if (g1 > g2)
        {
            contI ++;
        }
        else if (g1 < g2)
        {
            contG ++;
        }
        else
        {
            contE ++;
        }
    }

    printf("%i grenais\n", contP);
    printf("Inter: %i\nGremio: %i\nEmpates: %i\n", contI, contG, contE);
    if (contI > contG)
    {
        printf("Inter venceu mais\n");
    }
    else if (contI < contG)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}