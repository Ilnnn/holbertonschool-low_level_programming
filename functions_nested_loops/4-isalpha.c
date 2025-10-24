#include "main.h"
#include <stdio.h>
/**
 * _isalpha - vérifie si un caractère est alphabétique
 * @c: le caractère à tester
 *
 * Return: 1 si c est une lettre (minuscule ou majuscule), 0 sinon
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
