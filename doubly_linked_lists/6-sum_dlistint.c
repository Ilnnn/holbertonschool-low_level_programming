#include "lists.h"
/**
 * sum_dlistint - Sums all the data (n) in a doubly linked list.
 * @head: Pointer to the first node.
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
