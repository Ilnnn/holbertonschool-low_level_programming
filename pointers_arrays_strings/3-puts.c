#include "main.h"
#include <stdio.h>
/**
 * _puts - affiche une chaîne de caractères suivie d’un saut de ligne
 * @str: pointeur vers la chaîne à afficher
 *
 * Description: Cette fonction parcourt la chaîne pointée par @str
 * et affiche chaque caractère à l’aide de la fonction _putchar,
 * puis affiche un retour à la ligne à la fin.
 */
void _puts(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
