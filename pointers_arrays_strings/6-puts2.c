#include "main.h"
#include <stdio.h>
/**
 * puts2 - affiche un caractère sur deux e chaînen commençant par l prem
 * @str: pointeur vers la chaîne de caractères à afficher
 *
 * Description: Cette fonction parcourt la chaîne pointée par @str
 * et affiche uniquement les caractères dont l’indice est pair,
 * suivis d’un saut de ligne à la fin.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
		_putchar('\n');
}
