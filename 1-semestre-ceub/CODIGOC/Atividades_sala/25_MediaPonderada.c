#include <stdio.h>

int main (void)
{
    double notas[3][3];
    float pesos[] = {2.0, 3.0, 5.0};
    float total[] = {0, 0, 0};
    int casos;

    scanf("%i", &casos);

    for (int i = 0; i < casos; i++)
    {
        for (int j = 0; j < casos; j++)
        {
            printf("Aluno %i: ", i + 1);
            scanf("%lf", &notas[i][j]);
            total[i] += notas[i][j] * pesos[j] / (float) 10;
        }
    }

    for (int i = 0; i < casos; i++)
    {
        printf("\nMedia aluno %i: %.1f", i + 1, total[i]);
    }

    return 0;
}