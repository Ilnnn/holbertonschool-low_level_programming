#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Affiche un échiquier de 8 lignes et 8 colonnes
 * @a: Tableau 2D représentant l'échiquier
 *
 * Return: Rien (void)
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j = 0;

		while (i < 8)
	{
		j = 0;

		while (j < 8)
	{
		_putchar(a[i][j]);
		j++;
	}
	_putchar('\n');
	i++;
	}
}
