#include "lists.h"
/**
 * dlistint_len - retourne la longueur d’une liste doublement chaînée
 * @h: pointeur vers le début de la liste
 * Return: nombre de nœuds
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
