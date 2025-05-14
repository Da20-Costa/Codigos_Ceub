//Davi de Sousa Costa
#include <stdio.h>

int main (void)
{
    int hi, mi, hf, mf, duracaoHora, duracaoMin;

    scanf("%i %i %i %i", &hi, &mi, &hf, &mf);

    if(mi > mf){
        if(hi >= hf){
            duracaoHora = ((hf + 24) - hi) - 1;
        }
        else{
        duracaoHora = (hf - hi) - 1;
        }
        
        duracaoMin = (mf + 60) - mi;
    }
    else{
        if(hi >= hf){
            duracaoHora = (hf + 24) - hi;
        }
        else{
        duracaoHora = hf - hi;
        }

        duracaoMin = mf - mi;
    }

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)", duracaoHora, duracaoMin);
    return 0;
}