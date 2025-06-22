#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Affiche tous les entiers de n à 98
 * @n: Le nombre de départ
 *
 * Description: Affiche tous les nombres entiers depuis n jusqu'à 98,
 * Séparés par une virgule et un espace, puis une nouvelle ligne.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;

	}
	printf("%d\n", n);
}
