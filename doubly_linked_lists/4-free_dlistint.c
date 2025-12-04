#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description: Iterates through the list freeing each node.
 * Does nothing if the list is empty.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *omrt;

	omrt = head;

	while (head != NULL)
	{
		omrt = head->next;
		free(head);
		head = omrt;
	}

}
