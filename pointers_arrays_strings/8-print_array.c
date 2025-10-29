#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Description: Prints each element separated by ", " and ends with a newline.
 */

void print_array(int *a, int n)
{
	int p = 0;

	while (p < n)
	{
		printf("%d", a[p]);

	if
	(p < n - 1)

		{
			printf(", ");
		}
	p++;

	}
	printf("\n");
}
