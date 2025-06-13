#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_NOME 50

int main (void)
{
    int alunos = 0;
    char *alunomaior;
    float media = 0, maior = 0;

    while (alunos < 1 || alunos > 30)
    {
        printf("Quantos alunos quer cadastrar?\n");
        scanf("%i", &alunos);
    }

    char **nomes = malloc(alunos * sizeof(char *));
    if (nomes == NULL)
    {
        return 1;
    }
    float *notas = malloc(alunos * sizeof(float));
    if (notas == NULL)
    {
        return 1;
    }

    for(int i = 0; i < alunos; i++)
    {
        nomes[i] = malloc(TAMANHO_NOME * sizeof(char));
        if (nomes[i] == NULL)
        {
            return 1;
        }

        printf("Insira o nome do aluno\n");
        scanf("%s", nomes[i]);
        printf("Insira a nota dele\n");
        scanf("%f", &notas[i]);
        if (notas[i] > maior)
        {
            maior = notas[i];
            alunomaior = nomes[i];
        }

        media += notas[i];
    }

    printf("Media das notas = %.1f\n", media / alunos);
    printf("Aluno com maior nota: %s\n", alunomaior);

    for (int i = 0; i < alunos; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(notas);

    return 0;
}