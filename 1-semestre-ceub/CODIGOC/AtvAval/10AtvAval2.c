//Davi de Sousa Costa
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, x, y;

    scanf("%i", &n);

    int *soma = malloc(n * sizeof(int));
    if (soma == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        soma[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%i %i", &x, &y);

        if (x > y) {
            int aux = x;
            x = y;
            y = aux;
        }

        while (y > x && y != x + 1)
        {
            y--;
            if (y % 2 == 1) 
            {
                soma[i] += y;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", soma[i]);
    }

    free(soma);

    return 0;
}