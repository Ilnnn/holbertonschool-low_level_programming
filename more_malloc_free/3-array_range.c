#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

