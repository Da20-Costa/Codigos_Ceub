//Davi de Sousa Costa
#include<stdio.h>
#include <math.h>

void bubbleSort (float *vetor)
{
    float aux;
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
    float lado[3];

    for (int i = 0; i < 3; i ++){
        
        scanf("%f", &lado[i]);
    }

    bubbleSort(lado);

    if(lado[0] < lado[1] + lado[2]){
        float perimetro = 0;
        for (int i = 0; i < 3; i ++){
            perimetro += lado[i];
        }
        printf("Perimetro = %.1f", perimetro);
    }
    else {
        float area = (lado[0] + lado[1]) * lado[2] / 2;
        printf ("Area = %.1f", area);
    }
    return 0;
}