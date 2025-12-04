#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the pointer to the head of the list
 * @n: Value to store in the new node
 *
 * Return: Address of the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mew2, *c;

	mew2 = malloc(sizeof(dlistint_t));
	if (mew2 == NULL)
	{
		return (NULL);
	}

	mew2->n = n;
	mew2->next = NULL;

	if (*head == NULL)
	{
		mew2->prev = NULL;
		*head = mew2;
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
