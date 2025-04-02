#include <stdio.h>

int main(void)
{
    int code, quant;
    float preco[5] = {4, 4.5, 5, 2, 1.5};
    
    printf("Codigo do produto: ");
    scanf("%i", &code);

    printf("Quantidade do produto: ");
    scanf("%i", &quant);

    float valor = preco[code - 1] * quant;

    printf("TOTAL: R$ %.2f", valor);
    
    return 0;
}