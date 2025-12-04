#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added, starting at 0
 * @n: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL if insertion is not possible
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *actl;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		nn = malloc(sizeof(dlistint_t));
		if (!nn)
		return (NULL);

		nn->n = n;
		nn->prev = NULL;
		nn->next = *h;

		if (*h)
		(*h)->prev = nn;

		*h = nn;
		return (nn);
	}

	actl = *h;

	i = 0;
	while (actl != NULL && i < idx - 1)
	{
		actl = actl->next;
		i++;
	}
		if (actl == NULL)
		return (NULL);

		nn = malloc(sizeof(dlistint_t));
		if (!nn)
		return (NULL);

		nn->n = n;
		nn->prev = actl;
		nn->next = actl->next;

		if (actl->next)
		actl->next->prev = nn;
		actl->next = nn;

		return (nn);
}
