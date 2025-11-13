#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - alloue une mémoire initialisée à zéro
 * @nmemb: nombre d’éléments
 * @size: taille de chaque élément
 *
 * Return: pointeur vers la mémoire allouée, ou NULL si échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *bn;
unsigned int i;
unsigned int sum;

	if (nmemb == 0 || size == 0)
	return (NULL);

	bn = malloc(nmemb * size);
	if (bn == 0)
	return (NULL);

	sum = nmemb * size;

	for (i = 0; i < sum; i++)
	{
		((char *)bn)[i] = 0;
	}
	return (bn);
}
