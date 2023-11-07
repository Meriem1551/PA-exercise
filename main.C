#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Search-algorithms/main.h"
int main()
{
    int times_exec[10]; // we'll execute the code 10 times
    for (int i = 0; i < 10; i++)
    {
        clock_t start = clock(); // record the start time
        int size = get_input("Enter the size of your array");
        int *t = (int *)malloc(size * sizeof(int));
        FILE *csv_file = fopen("execution_times.csv", "a");
        if (size <= 0)
        {
            printf("Enter a valid number");
            return 1;
        }
        if (t == NULL)
        {
            printf("Allocation failed");
            return 1;
        }
        remplirTableauAvecEntiersAleatoires(t, size, 1000000);

        int check = get_input("Enter 0 to use selection sort and 1 for insertion sort");
        if (check == 0)
        {
            TriSelection(t, size);
        }
        else
        {
            TriInsertion(t, size);
        }

        clock_t finish = clock(); // record the finish time
        times_exec[i] = (finish - start) / CLOCKS_PER_SEC;
        printf("It took %d seconds to execute the program.\n", times_exec[i]);
        if (i == 0)
            fprintf(csv_file, "Selection sort\n");
        fprintf(csv_file, "%d  %d\n", size, times_exec[i]);
        if (i == 4)
            fprintf(csv_file, "Insertion sort\n");
        fclose(csv_file);
    }
    return 0;
}