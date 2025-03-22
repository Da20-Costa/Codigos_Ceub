#include <stdio.h>

int main (void)
{
    float A, B;
    double Media;
    
    do
    {
    printf ("Insira a nota A:\n");
    scanf ("%f", &A);
    }
    while (A < 0 || A > 10);

    do
    {
    printf ("Insira a nota B:\n");
    scanf ("%f", &B);
    }
    while (B < 0 || B > 10);

    Media = (A * 3.5 + B * 7.5) / 11;

    printf ("A media eh: \n MEDIA = %.5lf", Media);
}