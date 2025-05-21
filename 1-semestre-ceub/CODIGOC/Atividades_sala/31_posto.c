#include <stdio.h>

int main (void)
{
    int x;
    int al = 0;
    int ga = 0;
    int di = 0;

    while (x >= 1 || x <= 4)
    {
        scanf("%i", &x);
        if (x == 1)
        {
            al ++;
        }
        else if (x == 2)
        {
            ga ++;
        }
        else if (x == 3)
        {
            di ++;
        }
        else if (x == 4)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i", al, ga, di);
}