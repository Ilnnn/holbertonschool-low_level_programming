#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the first node of the list
 * @index: Index of the node to return (starting from 0)
 *
 * Return: Pointer to the node at index, or NULL if not found
 */
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
