#include <stdio.h>

int main (void)
{
    int n = 0;

    while (n <= 1 || n >= 1000)
    {
        scanf("%i", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%i %i %i\n", i, i*i, i*i*i);
    }

    return 0;
}