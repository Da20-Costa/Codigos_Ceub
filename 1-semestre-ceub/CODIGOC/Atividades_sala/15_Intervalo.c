#include <stdio.h>

int main(void)
{
    float numero;

    printf("Numero: ");
    scanf("%f", &numero);

    if((numero >= 0) && (numero <= 25))
    {
        printf("Intervalo [0,25]");
    } 
    else if((numero > 25) && (numero <= 50))
    {
        printf("Intervalo (25,50]");
    }
    else if((numero > 50) && (numero <= 75))
    {
        printf("Intervalo (50,75]");
    }
    else if((numero > 75) && (numero <= 100))
    {
        printf("Intervalo (75,100]");
    }
    else if((numero < 0) || (numero > 100))
    {
        printf("Fora do intervalo");
    }
    return 0;
}