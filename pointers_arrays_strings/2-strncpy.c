#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string up to n bytes
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while
	(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}