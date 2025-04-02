#include <stdio.h>
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
    float lados[3];

    for (int i = 0; i < 3; i ++){
        
        scanf("%f", &lados[i]);
    }

    bubbleSort(lados);

    if(lados[0] >= lados[1] + lados[2])
    {
        printf("Nao forma triangulo\n");
        return 0;
    }
    else if (pow(lados[0], 2) == pow(lados[1], 2) + pow(lados[2], 2))
    {
        printf("Triangulo retangulo\n");
    }
    else if (pow(lados[0], 2) > pow(lados[1], 2) + pow(lados[2], 2))
    {
        printf("Triangulo obtusangulo\n");
    }
    else if (pow(lados[0], 2) < pow(lados[1],2) + pow(lados[2],2))
    {
        printf("Triangulo acutangulo\n");
    }
    
    if(lados[0] == lados[1] && lados[1] == lados[2])
    {
        printf("Triangulo equilatero\n");
    }
    else if((lados[0] == lados[1]) ^ (lados[0] == lados[2]) ^ (lados[1] == lados[2]))
    {
        printf("Triangulo isosceles\n");
    }
    return 0;
}