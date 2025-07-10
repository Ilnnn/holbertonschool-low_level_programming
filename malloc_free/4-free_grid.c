#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Libère une grille 2D précédemment allouée par alloc_grid
 * @grid: Grille 2D à libérer
 * @height: Hauteur de la grille (nombre de lignes)
 *
 * Return: Rien (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
