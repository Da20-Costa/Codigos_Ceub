#include <stdio.h>

int main (void)
{
    int X;

    printf("Adivinhe um numero entre 1 e 100: \n");

    do
    {
        scanf("%i", &X);
        if (X < 1 || X > 100)
        {
            printf("O numero deve estar entre 0 e 101: \n");
            scanf("%i", &X);
        }
        if (X > 42)
        {
            printf("O numero eh menor, tente novamente: \n");
        }
        else if (X < 42)
        {
            printf("O numero eh maior, tente novamente: \n");
        }
    } while (X != 42);

    printf("Parabens, voce acertou!\n");
    
    return 0;
}