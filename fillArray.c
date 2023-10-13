#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void remplirTableauAvecEntiersAleatoires(int *tab, int size, int maxValue)
{
    int i;
    for (i = 0; i < size; i++)
    {
        tab[i] = (int)(rand() / ((double)RAND_MAX + 1) * maxValue);
    }
}