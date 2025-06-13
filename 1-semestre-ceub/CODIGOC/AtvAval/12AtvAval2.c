#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int N, menor, pos = 0;

    do
    {
        scanf("%i", &N);
    } while (N < 1 || N > 1000);
    
    int *X = malloc(N * sizeof(int));
    if(X == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    scanf("%i", &X[0]);
    menor = X[0];

    for(int i = 1; i < N; i++)
    {
        scanf("%i", &X[i]);
        if(X[i] < X[i-1])
        {
            menor = X[i];
            pos = i;
        }
    }

    printf("Menor valor = %i\n", menor);
    printf("Posicao = %i\n", pos);

    free(X);
    
    return 0;
}