#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
    if (a < b) {
    return a; // Se 'a' for menor, retorne 'a'.
} else {
    return b; // Senão ('a' não é menor), retorne 'b'.
}
}

int main() 
{
    int N;
    int valor_celula;

    while (scanf("%d", &N) == 1 && N != 0) 
    {
        for(int i = 0; i < N; i++) 
        { 
            for (int j = 0; j < N; j++) 
            {            
                int dist_vertical = min(i, N - 1 - i);
                int dist_horizontal = min(j, N - 1 - j);
                valor_celula = 1 + min(dist_vertical, dist_horizontal);

                if (j == 0) 
                {
                    printf("%3d", valor_celula);
                } else 
                {
                    printf(" %3d", valor_celula);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}