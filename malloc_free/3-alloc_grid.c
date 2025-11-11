#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
int **tab;
int l = 0;
int c = 0;
int i = 0;


if (width <= 0)
return NULL;

if (height <= 0)
return NULL;

tab = malloc(height * sizeof(int *));
if (tab == NULL)
return NULL;

l = 0;

while (l < height)
{
	tab[l] = malloc(width * sizeof(int));
	if (tab[l] == NULL)
{
while (i < l)
{
	free (tab[i]);
	i++;

}
free(tab);
return NULL;
}

c = 0;
while (c < width)
	{
		tab[l][c] = 0;
		c++;
	}
		l++;
}

return (tab);
}