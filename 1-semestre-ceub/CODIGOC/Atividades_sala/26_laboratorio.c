#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int quantia;
    int soma = 0;
    char tipo;
    int casos;
    int animais[3] = {0, 0, 0};
    char *nomes[3] = {"Coelhos", "Sapos", "Ratos"};

    scanf("%i", &casos);

    for(int i = 0; i < casos; i++)
    {
        do
        {
        scanf("%i %c", &quantia, &tipo);
        }
        while (quantia < 1 || quantia > 15);

        tipo = toupper(tipo);

        if (tipo == 'C')
        {
            animais[0] += quantia;
        }
        if (tipo == 'S')
        {
            animais[1] += quantia;
        }
        if (tipo == 'R')
        {
            animais[2] += quantia;
        }
        soma += quantia;
    }

    printf("Total: %i\n", soma);

    for (int i = 0; i < 3; i++)
    {
        printf("Total de %s: %i\n", nomes[i], animais[i]);
    }
    for (int i = 0; i < 3; i ++)
    {
        float percentual = (animais[i] / (float) soma * 100);
        printf("Percentual de %s: %.2f %%\n", nomes[i], percentual);
    }

    return 0;
}