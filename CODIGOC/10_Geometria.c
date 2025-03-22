#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main (void)
{
    double A, B, C, tri, cir, trap, quad, ret;

        printf("Valor A: ");
         scanf("%lf", &A);
        printf("Valor B: ");
         scanf("%lf", &B);
        printf("Valor A: ");
         scanf("%lf", &C);

        tri = A * C / 2;
        cir = pi * pow (C, 2);
        trap = (A + B) * C / 2;
        quad = pow (B, 2);
        ret = A * B;

        printf("TRIANGULO = %.3lf\nCIRCULO = %.3lf\nTRAPEZIO = %.3lf\nQUADRADO = %.3lf\nRETANGULO = %.3lf", tri, cir, trap, quad, ret);
}