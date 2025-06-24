#include "main.h"
/**
 * print_square - Affiche un carré de '#' de taille donnée
 * @size: Taille du carré à afficher (nombre de lignes et colonnes)
 *
 * Description: Affiche un carré en utilisant le caractère '#'.
 * Si size est inférieur ou égal à 0, affiche seulement un saut de ligne.
 *
 * Return: Rien (void)
 */
void print_square(int size)
{
	int s;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (s = 0; s < size; s++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
