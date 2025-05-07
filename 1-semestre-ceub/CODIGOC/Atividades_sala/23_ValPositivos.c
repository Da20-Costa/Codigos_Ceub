#include <stdio.h>

int main (void)
{
    float num[6];
    int tamanho = sizeof(num) / sizeof(num[0]);
    float media = 0;
    int quant = 0;

    for (int i = 0; i < tamanho; i++){
        scanf("%f", &num[i]);
    }

    for (int i = 0; i < tamanho; i ++){
        if (num[i] > 0)
        {
            quant += 1;
            media += num[i];
        }
    }

    media = media / quant;

    printf("%i valores positivos\n", quant);
    printf("%.2f", media);
}