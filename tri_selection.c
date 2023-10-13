#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void TriSelection(int *tab, int size)
{
    for (int i = 0; i < size-1; i++)
    {
      int index =i;
	  for(int j = i+1; j < size; j++)	
        {
       	 if(tab[index] > tab[j])
		    {
       	 	index = j;
		    }
	    }
	  if(index != i)
	   {
	   	int m;
	   	m=tab[i];
	   	tab[i]=tab[index];
	   	tab[index]=m;
	   }
    }
}