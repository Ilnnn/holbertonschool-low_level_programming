#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Affiche chaîne de caractères suivie d'une new ligne
 * @s: Pointeur vers la chaîne à afficher
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
