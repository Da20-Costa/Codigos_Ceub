#include <stdio.h>
#include <math.h>

int main(void)
{
    double valor;
    int notas, moedas;
    int quantidade_notas[6] = {100, 50, 20, 10, 5, 2};
    double quantidade_moedas[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    scanf("%lf", &valor);

    printf("NOTAS: \n");
    for (int i = 0; i <= 5; i++){

        notas = valor / quantidade_notas[i];
        if (notas < 1) {
            printf("0 notas de R$ %i,00\n", quantidade_notas[i]);
            continue;
        }
        valor = valor - (notas * quantidade_notas[i]);
        printf("%i notas de R$ %i,00\n", notas, quantidade_notas[i]);
    }

    printf("MOEDAS: \n");
    for (int i = 0; i <= 5; i++){

        moedas = valor / quantidade_moedas[i];
        if (moedas < 0){
            printf("0 moedas de R$ %.2lf\n", quantidade_moedas[i]);
            continue;
        }
        valor = valor - (moedas * quantidade_moedas[i]);
        printf("%i moedas de R$ %.2lf\n", moedas, quantidade_moedas[i]);
    }
    return 0;
}