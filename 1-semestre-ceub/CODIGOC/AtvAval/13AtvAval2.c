#include <stdio.h>

int main (void)
{
    int N;

    do
    {
        scanf("%i", &N);
    } while (N < 3 || N >= 70);

    int M[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
            {
                M[i][j] = 1;
            }
            else if (i + j == N - 1)
            {
                M[i][j] = 2;
            }
            else
            {
                M[i][j] = 3;
            }

            printf("%i", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}