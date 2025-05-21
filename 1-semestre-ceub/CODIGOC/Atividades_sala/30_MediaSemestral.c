#include <stdio.h>

int main (void)
{
    double x, y;

    scanf("%lf", &x);
    while (x < 0 || x > 10)
    {
        printf("Nota invalida\n");
        scanf("%lf", &x);
    }

    scanf("%lf", &y);
    while (y < 0 || y > 10)
    {
        printf("Nota invalida\n");
        scanf("%lf", &y);
    }

    double media = (x + y) / 2;
    printf("media = %.2lf", media);

    return 0;
}