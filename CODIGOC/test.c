#include <stdio.h>

int main (void){
    int numbers [100];
    for (int i = 0; i < 99; i++){
        numbers [i] = i;
    }
    printf ("%i", numbers [99]);
}