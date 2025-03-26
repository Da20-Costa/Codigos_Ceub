#include <stdio.h>

#include <stdio.h>

int n_100 (double valor);
int n_50 (double valor);
int n_20 (double valor);
int n_10 (double valor);
int n_5 (double valor);
int n_2 (double valor);
int m_1 (double valor);
double m_05 (double valor);
double m_025 (double valor);
double m_010 (double valor);
double m_005 (double valor);
double m_001 (double valor);

int main(void)
{
    double valor;

    scanf("%lf", &valor);

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

    int c1 = m_1 (valor);
    valor = valor - c1 * 1;

    int c05 = m_05 (valor);
    valor = valor - c05 * 0.5;

    int c025 = m_025 (valor);
    valor = valor - c025 * 0.25;

    int c010 = m_010 (valor);
    valor = valor - c010 * 0.10;

    int c005 = m_005 (valor);
    valor = valor - c005 * 0.05;

    int c001 = m_001 (valor);
    valor = valor - c001 * 0.01;


    printf("NOTAS: \n");
    printf("%i nota(s) de R$ 100,00\n", c100);
    printf("%i nota(s) de R$ 50,00\n", c50);
    printf("%i nota(s) de R$ 20,00\n", c20);
    printf("%i nota(s) de R$ 10,00\n", c10);
    printf("%i nota(s) de R$ 5,00\n", c5);
    printf("%i nota(s) de R$ 2,00\n", c2);
    printf("MOEDAS: \n");
    printf("%i moeda(s) de R$ 1,00\n", c1);
    printf("%i moeda(s) de R$ 0,50\n", c05);
    printf("%i moeda(s) de R$ 0,25\n", c025);
    printf("%i moeda(s) de R$ 0,10\n", c010);
    printf("%i moeda(s) de R$ 0,05\n", c005);
    printf("%i moeda(s) de R$ 0,01\n", c001);

    return 0;
}

int n_100 (double valor)
{
    int q100 = 0;
    while(valor >= 100)
    {
        valor = valor - 100;
        q100 ++;
    }
    return q100;
}

int n_50 (double valor)
{
    int q50 = 0;
    while(valor >= 50)
    {
        valor = valor - 50;
        q50 ++;
    }
    return q50;
}

int n_20 (double valor)
{
    int q20 = 0;
    while(valor >= 20)
    {
        valor = valor - 20;
        q20 ++;
    }
    return q20;
}

int n_10 (double valor)
{
    int q10 = 0;
    while(valor >= 10)
    {
        valor = valor - 10;
        q10 ++;
    }
    return q10;
}

int n_5 (double valor)
{
    int q5 = 0;
    while(valor >= 5)
    {
        valor = valor - 5;
        q5 ++;
    }
    return q5;
}

int n_2 (double valor)
{
    int q2 = 0;
    while(valor >= 2)
    {
        valor = valor - 2;
        q2 ++;
    }
    return q2;
}

int m_1 (double valor)
{
    int q1 = 0;
    while(valor >= 1)
    {
        valor = valor - 1;
        q1 ++;
    }
    return q1;
}

double m_05 (double valor)
{
    int q05 = 0;
    while(valor >= 0.5)
    {
        valor = valor - 0.5;
        q05 ++;
    }
    return q05;
}

double m_025 (double valor)
{
    int q025 = 0;
    while(valor >= 0.25)
    {
        valor = valor - 0.25;
        q025 ++;
    }
    return q025;
}

double m_010 (double valor)
{
    int q010 = 0;
    while(valor >= 0.10)
    {
        valor = valor - 0.10;
        q010 ++;
    }
    return q010;
}

double m_005 (double valor)
{
    int q005 = 0;
    while(valor >= 0.05)
    {
        valor = valor - 0.05;
        q005 ++;
    }
    return q005;
}

double m_001 (double valor)
{
    int q001 = 0;
    while(valor >= 0.01)
    {
        valor = valor - 0.01;
        q001 ++;
    }
    return q001;
}