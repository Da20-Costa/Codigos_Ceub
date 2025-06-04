#include <stdio.h>

int main(void)
{
    int par[5], impar[5], n;
    int contI = 0, contP = 0;

    for(int i = 0; i < 15; i++)
    {
        scanf("%i", &n);

        if(n % 2 == 0)
        {
            par[contP] = n;
            contP++;
        }
        else
        {
            impar[contI] = n;
            contI++;
        }

        if(contP == 5)
        {
            for(int j = 0; j < 5; j ++)
            {
                printf("par[%i] = %i\n", j, par[j]);
            }
            contP = 0;
        }
        if(contI == 5)
        {
            for(int j = 0; j < 5; j ++)
            {
                printf("impar[%i] = %i\n", j, impar[j]);
            }
            contI = 0;
        }
    }

    for(int i = 0; i < contI; i++)
    {
        printf("impar[%i] = %i\n", i, impar[i]);
    }

    for(int i = 0; i < contP; i++)
    {
        printf("par[%i] = %i\n", i, par[i]);
    }

    return 0;
}