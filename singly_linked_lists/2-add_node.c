#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
	len++;

	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
