#include <stdio.h>

int main (void)
{
    int N, Q, counter;

    do
    {
        scanf("%i %i", &N, &Q);
    } while (N < 1 || N > 50 || Q < 1 || Q > 100);
    
    int M[N][N];
    int aux[N][N];

    char linha_buffer[N + 2]; //\n e \0

    for (int i = 0; i < N; i++) 
    {
        scanf("%s", linha_buffer);
        for (int j = 0; j < N; j++)
        {
            M[i][j] = linha_buffer[j] - '0';
        }
    }

    printf("\n");

    for (int z = 0; z < Q; z++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                counter = 0;

                for (int x = -1; x <=1; x++)
                    {
                        for (int y = -1; y <= 1; y++)
                        {
                            if (x == 0 && y == 0)
                            {
                                continue;
                            }

                            int currentX = i + x;
                            int currentY = j + y;

                            if (currentX >= 0 && currentX < N && currentY >= 0 && currentY < N)
                            {
                               if (M[currentX][currentY] == 1)
                               {
                                counter++;
                               }
                            }
                        }
                    }
                    
                if (M[i][j] == 0)
                    {
                        if (counter == 3)
                        {
                            aux[i][j] = 1;
                        }
                        else
                        {
                            aux[i][j] = 0;
                        }
                    }
                    else if (M[i][j] == 1)
                    {
                        if (counter < 2 || counter > 3)
                        {
                            aux[i][j] = 0;
                        }
                        else
                        {
                            aux[i][j] = 1;
                        }
                    }
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                M[i][j] = aux[i][j];
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%i", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}