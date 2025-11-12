#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Alloue la mémoire et vérifie si allocation réussi
 * @b: Taille en octets à allouer
 *
 * Return: Pointeur vers la mémoire allouée
 * Termine le programme avec le statut 98 si malloc échoue
 */
void *malloc_checked(unsigned int b)
{

void *tab = malloc(b);

if (tab == NULL)
exit(98);

return (tab);
}
