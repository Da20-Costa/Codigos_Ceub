#include <stdio.h>

int main (void){
    int N, H;
    float V, S;

    printf("Insira o numero do funcionario: ");
    scanf("%i", &N);

    printf("Insira as horas trabalhadas: ");
    scanf("%i", &H);

    printf("Valor por hora trabalhada: ");
    scanf("%f", &V);

    printf("NUMERO = %i\nSALARIO = U$ %.2lf", N, S = H * V);
}