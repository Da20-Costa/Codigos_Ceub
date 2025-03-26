#include <stdio.h>

int main(void)
{
    int idade;

    printf("Insira sua idade em dias: ");
    scanf("%i", &idade);

    int anos = idade / 365;
    idade = idade - anos * 365;

    int meses = idade / 30;
    idade = idade - meses * 30;

    int dias = idade;

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}