#include "main.h"
#include <stdio.h>
/**
 * _isupper - Vérifie si un caractère est une lettre majuscule
 * @c: Le caractère |  vérifier (code ASCII)
 *
 * Return: 1 si le caractère est une lettre majuscule, 0 sinon.
 */
int _isupper(int c)
{
	{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	}
	return (0);
}
