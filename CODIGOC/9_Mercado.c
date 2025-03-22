#include <stdio.h>

int main (void)
{
    int P1, P2, Q1, Q2;
    float V1, V2, VP;

    printf("Codigo do produto 1: ");
    scanf("%i", &P1);

    printf("Quantidade produto 1: ");
    scanf("%i", &Q1);

    printf("Valor produto 1: ");
    scanf("%f", &V1);

    printf("Codigo produto 2: ");
    scanf("%i", &P2);

    printf("Quantidade produto 2: ");
    scanf("%i", &Q2);

    printf("Valor produto 2: ");
    scanf("%f", &V2);

    printf("VALOR A PAGAR = R$ %.2f", VP = Q1 * V1 + Q2 * V2);
}