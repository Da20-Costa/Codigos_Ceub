#include <stdio.h>

int main(void)
{
    double M[12][12], soma = 0;
    char T;
    int L;

    do
    {
        scanf("%i", &L);
    } while (L < 0 || L > 11);

    scanf(" %c", &T);
    
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    for(int j = 0; j < 12; j++)
    {
        soma += M[L][j];
    }

    if(T == 's')
    {
        printf("%.1lf\n", soma);
    }
    else if(T == 'm')
    {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}