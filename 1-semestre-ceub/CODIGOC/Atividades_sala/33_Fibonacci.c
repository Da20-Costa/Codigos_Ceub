#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int N;

    do
    {
        scanf("%i", &N);
    } while (N > 46 || N < 0);

    int *fib = malloc(sizeof(N));

    fib[0] = 0;
    fib[1] = 1;
    printf("%i %i ", fib[0], fib[1]);

    for (int i = 2; i < N; i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
        printf("%i ", fib[i]);
    }

    free(fib);

    return 0;
}