#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mew2, *c;

	mew2 = malloc(sizeof(dlistint_t));
	if (mew2 == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		return (NULL);
	}

	mew2->n = n;
	mew2->prev = NULL;
	mew2->next = NULL;

	if (*head == NULL)
	{
		head = mew2;
		return (mew2);
	}

	c = *head;
	while (c->next != NULL)
	{
		c = c->next;
	}
		c->next = mew2;
		mew2->prev = c;

	return (mew2);
}