#include <stdio.h>

int main(void)
{
    int senha;

    do
    {
        scanf("%i", &senha);
        if (senha != 2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Senha Valida\n");
        }
    } while (senha != 2002);
    
    return 0;
}