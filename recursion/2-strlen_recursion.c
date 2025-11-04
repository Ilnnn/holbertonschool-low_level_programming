#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Retourne la longueur d'une chaîne
 * @s: Pointeur vers la chaîne
 *
 * Return: Longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	return (0);

	else
	return (1 + _strlen_recursion(s + 1));
}
