#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Affiche la sommes des diagonales d'une matrice carrée
 * @a: Tableau 1D représentant la matrice
 * @size: Taille de la matrice
 */

void print_diagsums(int *a, int size)
{
	unsigned int diag1 = 0;
	unsigned int diag2 = 0;

	int i = 0;

	while (i < size)
	{
		diag1 = diag1 + a[i * size + i];
		diag2 = diag2 + a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
