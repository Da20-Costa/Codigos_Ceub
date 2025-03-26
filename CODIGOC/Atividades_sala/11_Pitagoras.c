#include <stdio.h>
#include <math.h>

int main (void)
{
    double x1, x2, y1, y2, dist;
    
        printf("De o valor do primeiro ponto: \n");
         scanf("%lf %lf", &x1, &y1);
        printf("De o valor do segundo ponto: \n");
         scanf("%lf %lf", &x2, &y2);

    dist = sqrt (pow (x1 - x2, 2) + pow (y2 - y1, 2));

        printf("Distancia entre pontos = %.4lf", dist);
    
}