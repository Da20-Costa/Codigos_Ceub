#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int inicio, fim, duracao;

    printf("Hora de inicio do jogo: ");
    scanf("%i", &inicio);
    printf("Hora de termino do jogo: ");
    scanf("%i", &fim);

    if (inicio > fim){
        duracao = (fim + 24) - inicio;
    }
    else{
        duracao = fim - inicio;
    }
    duracao = abs(duracao);

    printf("O jogo durou %i hora(s)", duracao);
    return 0;
}