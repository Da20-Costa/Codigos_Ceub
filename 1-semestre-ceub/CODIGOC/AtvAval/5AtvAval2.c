//Davi de Sousa Costa
#include <stdio.h>

int main (void)
{
    float salario;
    
    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400){
        float percent = salario * 0.15;
        salario += percent;
        printf("Novo salario: %.2f\nReajuste ganho: %2.f\nEm percentual: 15 %%", salario, percent);
    }
    else if(salario > 400 && salario <= 800){
        float percent = salario * 0.12;
        salario += percent;
        printf("Novo salario: %.2f\nReajuste ganho: %2.f\nEm percentual: 12 %%", salario, percent);
    }
    else if(salario > 800 && salario <= 1200){
        float percent = salario * 0.1;
        salario += percent;
        printf("Novo salario: %.2f\nReajuste ganho: %2.f\nEm percentual: 10 %%", salario, percent);
    }
    else if(salario > 1200 && salario <= 2000){
        float percent = salario * 0.07;
        salario += percent;
        printf("Novo salario: %.2f\nReajuste ganho: %2.f\nEm percentual: 7 %%", salario, percent);
    }
    else if(salario > 2000){
        float percent = salario * 0.04;
        salario += percent;
        printf("Novo salario: %.2f\nReajuste ganho: %2.f\nEm percentual: 4 %%", salario, percent);
    }
    return 0;
}