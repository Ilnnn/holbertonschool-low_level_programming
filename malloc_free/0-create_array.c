#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Crée un array de carac,l'initialise avec caractère donné
 * @size: taille du tableau à créer
 * @c: caractère utilisé pour initialiser le tableau
 *
 * Return: pointeur vers le tableau créé, ou NULL si l’allocation échoue
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;

if (size == 0)
{
	return (NULL);
}
array = malloc(size * sizeof(char));
if (array == 0)
	{
	return (NULL);
	}

while (i < size)
{
	array[i] = c;
	i++;
}
	return (array);
}
