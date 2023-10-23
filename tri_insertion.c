#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void TriInsertion(int *tab, int size)
{
 int i, i_min, j;
    for (i = 1; i < size; i++) {
        i_min = tab[i];
        j = i - 1;
        while (j >= 0 && tab[j] > i_min) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = i_min;
    }
}