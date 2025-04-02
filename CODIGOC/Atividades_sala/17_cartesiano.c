#include <stdio.h>

int main(void)
{
    float x, y;

    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Origem");
    }
    else if (x == 0 && y != 0)
    {
        printf("Eixo Y");
    }
    else if (x != 0 && y == 0)
    {
        printf("Eixo X");
    }
    else if (x > 0 && y > 0)
    {
        printf("Primeiro quadrante");
    }
    else if (x < 0 && y > 0)
    {
        printf("Segundo quadrante");
    }
    else if (x < 0 && y < 0)
    {
        printf("Terceiro quadrante");
    }
    else if (x > 0 && y < 0)
    {
        printf("Quarto quadrante");
    }
    return 0;
}