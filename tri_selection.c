#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void TriSelection(int *tab, int size)
{
	int tmp;
	for (int i = 0; i < size - 1; i++)
	{
		int i_min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (tab[i_min] > tab[j])
			{
				i_min = j;
			}
		}
		tmp = tab[i];
		tab[i] = tab[i_min];
		tab[i_min] = tmp;
		printf("%d\n", tab[i]);
	}
}