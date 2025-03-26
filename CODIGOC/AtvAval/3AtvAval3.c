#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = pow(B, 2) - 4 * A * C;
    double R1 = (-B + sqrt(delta)) / (A * 2);
    double R2 = (-B - sqrt(delta)) / (A * 2);

    if (delta < 0 || A * 2 == 0){
        printf("Impossivel calcular");
    }
    else{
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}