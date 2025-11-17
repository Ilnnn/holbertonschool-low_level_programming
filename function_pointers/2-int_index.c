#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches integer using a comparison function
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: comparison function
 *
 * Return: index of first element for which cmp != 0, or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		return (i);
		i++;
	}

	return (-1);
}
