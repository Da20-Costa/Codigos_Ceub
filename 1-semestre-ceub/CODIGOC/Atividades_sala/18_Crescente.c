#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    printf("\n");

    if (a > b && b > c)
    {
        printf("%i\n%i\n%i\n", c, b, a);
    }
    else if (a > c && c > b)
    {
        printf("%i\n%i\n%i\n", b, c, a);
    }
    else if(b > a && a > c)
    {
        printf("%i\n%i\n%i\n", c, a, b);
    }
    else if(b > c && c > a)
    {
        printf("%i\n%i\n%i\n", a, c, b);
    }
    else if(c > a && a > b)
    {
        printf("%i\n%i\n%i\n", b, a, c);
    }
    else if(c > b && b > c)
    {
        printf("%i\n%i\n%i\n", a, b, c);
    }

    printf("\n%i\n%i\n%i", a, b, c);
    return 0;
}