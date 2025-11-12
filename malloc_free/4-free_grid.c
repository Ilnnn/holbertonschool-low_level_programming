#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - libère une grille 2D allouée dynamiquement
 * @grid: pointeur vers la grille
 * @height: nombre de lignes de la grille
 *
 * Descpt: libère chaque ligne de la grille et le main tabl
 */
void free_grid(int **grid, int height)
{
	int tab = 0;

	while (tab < height)
	tab++;

	free(grid[tab]);
	free(grid);
}
