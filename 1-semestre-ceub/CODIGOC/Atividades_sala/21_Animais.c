#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerString (char *vetor);

int main (void)
{
    char p1[20], p2[20], p3[20];
    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    toLowerString(p1);
    toLowerString(p2);
    toLowerString(p3);

    if (strcmp(p1, "vertebrado") == 0){
        if(strcmp(p2, "ave") == 0){
            if(strcmp(p3, "carnivoro") == 0){
                printf("Aguia\n");
            }
            else if (strcmp(p3, "onivoro") == 0){
                printf("Pomba\n");
            }
        }
        else if(strcmp(p2, "mamifero") == 0){
            if(strcmp(p3, "onivoro") == 0){
                printf("Homem\n");
            }
            else if(strcmp(p3, "herbivoro")){
                printf("Vaca\n");
            }
        }
    }

    else if(strcmp(p1, "invertebrado") == 0){
        if(strcmp(p2, "inseto") == 0){
            if(strcmp(p3, "hematofogo") == 0){
                printf("Pulga\n");
            }
            else if(strcmp(p3, "herbivoro") == 0){
                printf("Lagarta\n");
            }
        }
        else if(strcmp(p2, "anelideo") == 0){
            if(strcmp(p3, "hematofogo") == 0){
                printf("Sanguessuga\n");
            }
            else if(strcmp(p3, "onivoro") == 0){
                printf("Minhoca\n");
            }
        }
    }
    return 0;
}

void toLowerString (char *vetor){
    for (int i = 0; i <= 20; i ++){
        vetor[i] = tolower(vetor[i]); 
    }
}