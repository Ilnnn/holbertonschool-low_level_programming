#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the n data of a dlistint_t list
 * @head: Pointer to the first node of the list
 *
 * Return: Sum of all the n values in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int summr = 0;

	while (head != NULL)
	{
		summr = summr + head->n;
		head = head->next;
	}

	return (summr);
}
