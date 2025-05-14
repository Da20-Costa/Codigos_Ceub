#include <stdio.h>

int main (void)
{
    int N;

    do {
    scanf("%i", &N);
    } 
    while (N < 2 || N  > 1000);

    for(int i = 1; i <= 10; i++)
    {
        int result = i * N;
        printf("%i X %i = %i\n", i, N, result);
    }
    
    return 0;
}