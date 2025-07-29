#include "lists.h"
/**
 * print_dlistint - Affiche tous les éléments d'une liste doue chaînée
 * @h: pointeur vers le début de la liste
 *
 * Return: nombre total de nœuds
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
