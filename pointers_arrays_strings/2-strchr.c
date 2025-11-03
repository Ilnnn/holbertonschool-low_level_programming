#include "main.h"
#include <stdio.h>
/**
 * _strchr - Localise la première occurrence d'un caractère dans une chaîne
 * @s: Pointeur vers la chaîne de caractères
 * @c: Caractère à rechercher
 *
 * Return: Pointeur vers la première occurrence de c, ou NULL si non trouvé
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		return (s + i);
		i++;
	}

	if (c == '\0')
	return (s + i);

	return (NULL);
}
