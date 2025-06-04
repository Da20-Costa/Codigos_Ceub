#include <stdio.h>

int main (void)
{
    double N[100];

    scanf("%lf", &N[0]);

    for(int i = 1; i < 100; i++)
    {
            N[i] = N[i-1] / 2.0;
    }
    
    for(int i = 0; i < 100; i++)
    {
        printf("N[%i] = %.4f\n", i, N[i]);
    }

    return 0;
}