//Davi de Sousa Costa
#include <stdio.h>

int main (void)
{
    float fixo, vendas, salario;
    char nome [25];

    fgets(nome, sizeof(nome), stdin);
    scanf("%f", &fixo);
    scanf("%f", &vendas);

    printf("TOTAL = R$%.2f", salario = 0.15 * vendas + fixo);
}