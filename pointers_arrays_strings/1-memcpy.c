#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copie n octets d'une zone mémoire vers une autre
 * @dest: Pointeur vers la zone mémoire de destination
 * @src: Pointeur vers la zone mémoire source
 * @n: Nombre d'octets à copier
 *
 * Return: Pointeur vers la zone mémoire dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
