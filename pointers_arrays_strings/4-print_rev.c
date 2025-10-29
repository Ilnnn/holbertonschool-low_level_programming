#include "main.h"
#include <stdio.h>
/**
 * print_rev - affiche une chaîne de caractères à l’envers
 * @s: pointeur vers la chaîne à afficher
 *
 * Description: Cette fonction parcourt la chaîne pour en trouver la fin,
 * puis affiche chaque caractère dans �ordre inverse ide de _putchar.
 * Un saut de ligne est ajouté à la fin de l’affichage.
 */

	void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
		_putchar('\n');
}
