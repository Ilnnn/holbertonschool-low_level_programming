#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Crée un tableau de `size` caractères avec `c
 * @size: Taille du tableau
 * @c: Caractère d'initialisation
 *
 * Return: Pointeur du tableau ou NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
