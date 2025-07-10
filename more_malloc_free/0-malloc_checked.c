#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Alloue mémoire avec mallc vérifie s iallocation réuss
 * @b: Taille en octets à allouer
 *
 * Return: Pointeur vers la mémoire allouée
 *         Termine le programme avec le code d'état 98 si malloc échoue
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
