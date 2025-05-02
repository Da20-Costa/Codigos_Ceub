#include <stdio.h>

int n_100 (int valor);
int n_50 (int valor);
int n_20 (int valor);
int n_10 (int valor);
int n_5 (int valor);
int n_2 (int valor);
int n_1 (int valor);

int main(void)
{
    int valor, valor0;

    printf("Valor: ");
    scanf("%i", &valor);

    valor0 = valor;

    int c100 = n_100 (valor);
    valor = valor - c100 * 100;

    int c50 = n_50 (valor);
    valor = valor - c50 * 50;

    int c20 = n_20 (valor);
    valor = valor - c20 * 20;

    int c10 = n_10 (valor);
    valor = valor - c10 * 10;

    int c5 = n_5 (valor);
    valor = valor - c5 * 5;

    int c2 = n_2 (valor);
    valor = valor - c2 * 2;

    int c1 = n_1 (valor);
    valor = valor - c1 *1;

    printf("%i\n", valor0);
    printf("%i nota(s) de R$100,00\n", c100);
    printf("%i nota(s) de R$50,00\n", c50);
    printf("%i nota(s) de R$20,00\n", c20);
    printf("%i nota(s) de R$10,00\n", c10);
    printf("%i nota(s) de R$5,00\n", c5);
    printf("%i nota(s) de R$2,00\n", c2);
    printf("%i nota(s) de R$1,00\n", c1);

    return 0;
}

int n_100 (int valor)
{
    int q100 = 0;
    while(valor >= 100)
    {
        valor = valor - 100;
        q100 ++;
    }
    return q100;
}

int n_50 (int valor)
{
    int q50 = 0;
    while(valor >= 50)
    {
        valor = valor - 50;
        q50 ++;
    }
    return q50;
}

int n_20 (int valor)
{
    int q20 = 0;
    while(valor >= 20)
    {
        valor = valor - 20;
        q20 ++;
    }
    return q20;
}

int n_10 (int valor)
{
    int q10 = 0;
    while(valor >= 10)
    {
        valor = valor - 10;
        q10 ++;
    }
    return q10;
}

int n_5 (int valor)
{
    int q5 = 0;
    while(valor >= 5)
    {
        valor = valor - 5;
        q5 ++;
    }
    return q5;
}

int n_2 (int valor)
{
    int q2 = 0;
    while(valor >= 2)
    {
        valor = valor - 2;
        q2 ++;
    }
    return q2;
}

int n_1 (int valor)
{
    int q1 = 0;
    while(valor >= 1)
    {
        valor = valor - 1;
        q1 ++;
    }
    return q1;
}