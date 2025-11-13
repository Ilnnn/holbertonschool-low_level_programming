#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - crée un tableau d'int de min à max
 * @min: valeur minimale du tableau
 * @max: valeur maximale du tableau
 *
 * Return: pointeur -> tableau créé ou NULL si min > max
 *         ou si l'allocation échoue
 */
int *array_range(int min, int max)
{
	unsigned int i = 0;
	unsigned int count = 0;
	int *arra;

	if (min > max)
	return (NULL);

	count = (max - min) + 1;
	arra = malloc(count * sizeof(int));
	if (arra == NULL)
	return (NULL);


	while (i < count)
	{
		arra[i] = min + i;
		i++;
	}

	return (arra);
}

