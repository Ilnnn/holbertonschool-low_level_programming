#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a f° on each element of an array
 * @array: array of integers
 * @size: number of elements in the array
 * @action: function to apply to each element
 *
 * Executes action on each element of array, nothing if
 * array or action is NULL.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	return;

	if (action == NULL)
	return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
