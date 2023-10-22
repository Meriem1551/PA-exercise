#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Search-algorithms/main.h"
int main()
{
    clock_t start = clock(); // record the start time
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
    TriSelection(t, size);
    // write your code here
    clock_t finish = clock(); // record the finish time
    printf("It took %d seconds to execute the program.\n", (finish - start) / CLOCKS_PER_SEC);
    return 0;
}