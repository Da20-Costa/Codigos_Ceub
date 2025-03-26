#include <stdio.h>

int main(void)
{
    int A,B,C,D;

    printf("A: ");
    scanf("%i", &A);
    printf("B: ");
    scanf("%i", &B);
    printf("C: ");
    scanf("%i", &C);
    printf("D: ");
    scanf("%i", &D);

    if ((B > C) && (D > A) && (C + D > A + B) && (C >= 0) && (D >= 0) && ( A % 2 == 0))
{
    printf("Valores aceitos.");
}
    else
{
    printf("Valores nao aceitos.");
}

return 0;
}