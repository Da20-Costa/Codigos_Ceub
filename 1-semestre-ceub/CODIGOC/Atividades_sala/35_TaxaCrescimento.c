#include <stdio.h>

int main (void)
{
    int PA, PB, T, anos;
    double GA, GB;

    do
    {
        scanf("%i", &T);
    } while (T < 0 || T > 3000);

    for(int i = 0; i < T; i++)
    {
        do
        {
            scanf("%i %i %lf %lf", &PA, &PB, &GA, &GB);
        } while (PA < 100 || PA > 1000000 || PB < 100 || PB > 1000000 || GA < 0.0 || GA > 10.0 || GB < 0.0 || GB > 10.0 || GB > GA || PB > PA);

        anos = 0;

        while (PA <= PB)
        {
            PA += PA * (GA / 100);
            PB += PB * (GB / 100);
            anos++;
        }

        if (anos > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%i anos\n", anos);
        }
    }

    return 0;
}