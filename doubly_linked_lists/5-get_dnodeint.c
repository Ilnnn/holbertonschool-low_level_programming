#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && 1 < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
