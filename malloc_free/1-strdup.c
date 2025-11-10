#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Retourne un pointeur sur une nouvelle chaîne de caractères
 * qui est une duplication de la chaîne donnée en paramètre.
 * @str: chaîne de caractères à dupliquer
 *
 * Return: pointeur vers la copie allouée dynamiquement,
 * ou NULL si str est NULL ou si l’allocation échoue.
 */
char *_strdup(char *str)
{
char *array;
unsigned int i = 0;
unsigned int len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	array = malloc((len + 1) * sizeof(char));
		if (array == 0)

		{
			return (NULL);
		}

	while (i < len)
	{
		array[i] = str[i];
		i++;
	}

	array[i] = '\0';
	return (array);
}
