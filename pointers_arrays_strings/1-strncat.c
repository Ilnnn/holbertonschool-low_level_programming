#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return(dest);
}