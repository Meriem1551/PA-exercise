#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "../Search-algorithms/main.h"
int main()
{

    int size = get_input("Enter the size of your array");
    int *t = (int *)malloc(size * sizeof(int));
    if (size <= 0)
    {
        printf("Enter a valid number");
        return 1;
    }
    if (t == NULL)
    {
        printf("Alocation failed");
        return 1;
    }
    remplirTableauAvecEntiersAleatoires(t, size, 1000000);
    return 0;
}