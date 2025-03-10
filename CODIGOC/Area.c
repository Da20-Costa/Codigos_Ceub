#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
    double raio, area;

    printf("Insira o raio do circulo: \n");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2);
    printf("A area do circulo eh: A = %.4lf\n", area);
}