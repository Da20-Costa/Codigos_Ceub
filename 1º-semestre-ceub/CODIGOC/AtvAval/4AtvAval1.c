//Davi de Sousa Costa
#include <stdio.h>

int main(void)
{
    float nota[4];
    for (int i = 0; i < 4; i++){
            scanf("%f", &nota[i]);
    }

    float media = (nota[0] * 2 + nota[1] * 3 + nota[2] * 4 + nota[3]) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7){
        printf("Aluno aprovado.");
    }
    else if (media < 5){
        printf("Aluno reprovado.");
    }
    else {
        printf("Aluno em exame.\n");
        float notaExame;
        printf("Nota do exame: ");
        scanf("%f", &notaExame);
        float mediaExame = (media + notaExame) / 2;
        if (mediaExame >= 5){
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f", mediaExame);
    }
    return 0;
}