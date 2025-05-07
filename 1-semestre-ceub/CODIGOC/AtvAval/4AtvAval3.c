//Davi de Sousa Costa
#include <stdio.h>

void bubbleSort (int *vetor)
{
    int aux;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (vetor[j] < vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(void)
{
    int valor[2];

    for (int i = 0; i < 2; i++){
        scanf("%i", &valor[i]);
    }

    bubbleSort(valor);

    if (valor[0] % valor[1] == 0){
        printf("Sao Multiplos");
    }
    else {
        printf("Nao sao multiplos");
    }
    return 0;
}