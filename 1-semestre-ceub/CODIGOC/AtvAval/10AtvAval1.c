//Davi de Sousa Costa
#include <stdio.h>

int main (void)
{
    int num[100];
    int maior = 0;
    int pos = 0;

    for (int i = 0; i < 100; i++)
    {
        scanf("%i", &num[i]);

        if (num[i] > maior)
        {
            maior = num[i];
            pos = i;
        }
    }
    
    printf("\n%i\n", maior);
    printf("%i", pos + 1);

    return 0;
}
