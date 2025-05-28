#include <stdio.h>

int main (void)
{
    int X[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%i", &X[i]);
         if (X[i] <= 0)
        {
            X[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("X[%i] = %i\n", i, X[i]);
    }

    return 0;
}