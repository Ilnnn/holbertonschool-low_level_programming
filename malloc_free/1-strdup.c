#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Crée une copie allouée dynamiquement dne chaîne de caractèr
 * @str: Chaîne de caractères à dupliquer
 *
 * Return: Pointeur vers la nouvelle chaîne dupliquée,
 * ou NULL si l'allocation échoue ou si str est NULL.
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
