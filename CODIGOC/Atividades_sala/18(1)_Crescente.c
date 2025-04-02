#include <stdio.h>

void bubbleSort (int *vetor);

int main(void)
{
    int VetorOriginal[3], VetorOrdenado[3];

    for (int i = 0; i < 3; i++){
        scanf("%i", &VetorOriginal[i]);

        VetorOrdenado[i] = VetorOriginal[i];
    }

    printf("\n");

    bubbleSort(VetorOrdenado);

    for(int i = 0; i < 3; i++){
        printf("%i\n", VetorOrdenado[i]);

    }
    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("%i\n", VetorOriginal[i]);
    }
    return 0;
}

void bubbleSort (int *vetor)
{
    int aux;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}