#include <stdio.h>

int main (void)
{
    int E, D, result;

    do
    {
        scanf("%i", &E);
    } while (E < 0 || E > 5);

    do
    {
        scanf("%i", &D);
    } while (E == D || D < 0 || D > 5 || D > E);
    
    
    if(E > D)
    {
        result = E + D;
        printf("%i", result);
    }
    else
    {
        result = 2 * (D - E);
        printf("%i", result);
    }

    return 0;
}
