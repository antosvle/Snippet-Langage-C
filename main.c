#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* tableau;
    int taille;

    printf("Veuillez saisir la taille de votre tableau :\n");
    scanf ("%d", &taille);

    tableau = malloc(sizeof(int) * taille);

    return 0;
}
