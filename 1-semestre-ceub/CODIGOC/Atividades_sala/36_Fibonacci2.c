#include <stdio.h>

int main (void)
{
    int T, N;
    long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    do
    {
        scanf("%i", &T);
    } while (T < 0 || T > 60);
    

    for(int i = 2; i < 61; i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
    }

    for(int i = 0; i < T; i++)
    {
        scanf("%i", &N);
        printf("Fib(%i) = %lli\n", N, fib[N]);
    }

    return 0;
}