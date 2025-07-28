#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
		if (!new)
	return (NULL);

	new->str = strdup(str);
		if (!new->str)

	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

		if(*head == NULL)
	{
		*head = new;
		return (new);
	}
	
	temp = *head;
		while (temp->next)
			temp = temp->next;
	temp->next = new;

	return (new);
}

