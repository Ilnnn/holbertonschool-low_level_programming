#include "main.h"
#include <stdio.h>
/**
 * _memset - Remplit une zone mémoire avec un octet constant
 * @s: Pointeur vers la zone mémoire à remplir
 * @b: Valeur à copier (l'octet constant)
 * @n: Nombre d'octets à remplir
 *
 * Return: Pointeur vers la zone mémoire s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
