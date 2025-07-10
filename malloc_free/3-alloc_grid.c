#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Alloue une grille 2D d'entiers initialisée à 0
 * @width: Largeur de la grille (nombre de colonnes)
 * @height: Hauteur de la grille (nombre de lignes)
 *
 * Return: Pointeur vers la grille 2D allouée,
 *         ou NULL en cas d'échec d'allocation ou si width/height <= 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
