#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - Frees a linked list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *bfr;

	while (head != NULL)
	bfr = head->next;
	free(head->str);
	free(head);

	head = bfr;
}
