#include <stdio.h>

int main(void)
{
    int tempo;
    scanf("%i", &tempo);
    
    int horas = tempo / 3600;
    tempo = tempo - horas * 3600;

    int min = tempo / 60;
    tempo = tempo - min * 60;

    int seg = tempo;

    printf("%i:%i:%i", horas, min, seg);
    return 0;
}