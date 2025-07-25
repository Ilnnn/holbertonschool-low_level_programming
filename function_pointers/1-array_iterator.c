#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: pointer to a function that takes an integer and performs an action
 *
 * Description: This function iterates over the elements of an array
 * and calls the function pointed to by `action` for each element.
 * It handles NULL inputs for `array` and `action` by doing nothing.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
