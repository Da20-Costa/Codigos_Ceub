#include <stdio.h>

int main (void)
{
    float salario, imposto;
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 2000){
        printf("Isento\n");
    }
    else if(salario > 2000 && salario <= 3000){
        imposto = (salario - 2000) * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if(salario > 3000 && salario <= 4500){
        imposto = (1000 * 0.08) + ((salario - 3000) * 0.18);
        printf("R$ %.2f\n", imposto);
    }
    else if(salario > 4500){
        imposto = (1000 * 0.08) + (1500 * 0.18) + ((salario - 4500) * 0.28);
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}