#include "lists.h"
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
