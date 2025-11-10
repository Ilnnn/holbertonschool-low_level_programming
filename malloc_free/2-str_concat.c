#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatène 2 chaînes caractères ds une new memory
 * allouée dynamiquement.
 * @s1: première chaîne de caractères
 * @s2: deuxième chaîne de caractères
 * Return: pointeur vers la nouvelle chaîne concaténée,
 *         ou NULL si l’allocation échoue.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int lenght1 = 0;
	unsigned int lenght2 = 0;
	char *array;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	{
		lenght1++;
		i++;
	}
	i = 0;

	while (s2[j] != '\0')
	{
		lenght2++;
		j++;
	}
	j = 0;

	array = malloc((lenght1 + lenght2 + 1) * sizeof(char));

	if (array == NULL)
	return (NULL);

	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		array[i + j] = s2[j];
		j++;
	}
	array[lenght1 + lenght2] = '\0';
	return (array);
}
