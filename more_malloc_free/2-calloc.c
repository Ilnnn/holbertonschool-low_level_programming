#include "main.h"
/**
 * _calloc - Alloue de la mémoire pour un table et initialise � zero
 * @nmemb: Nombre délémen
 * @size: Taille de chaque élément en octets
 *
 * Return: Pointeur vers la mémoire allouée initialisée à 0,
 * ou NULL si l’allocation échoue ou si nmemb ou size est 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
