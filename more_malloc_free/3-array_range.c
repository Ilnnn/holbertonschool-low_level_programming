#include "main.h"
/**
 * array_range - Crée un tableau d'entiers allant de min à max inclus
 * @min: Valeur minimale (incluse)
 * @max: Valeur maximale (incluse)
 *
 * Return: Pointeur vers le tableau d'entiers,
 *         ou NULL si min > max ou si l’allocation échoue
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
