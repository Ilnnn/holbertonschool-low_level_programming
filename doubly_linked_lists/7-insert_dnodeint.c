#include "lists.h"
/**
 * insert_dnodeint_at_index - insère un nouveau nœud à un index donné
 * @head: adresse du pointeur vers le début de la liste
 * @idx: position à laquelle insérer le nouveau nœud
 * @n: valeur entière à insérer dans le nouveau nœud
 *
 * Return: adresse du nouveau noeud, ou NULL si linsertion échoue
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
		if (!new || !head)
			return (NULL);

	new->n = n;
	new->next = NULL;

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}

		for (i = 0; temp && i < idx; i++)

	{
		if (i == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;

			return (new);
	}
		else
		temp = temp->next;
	}
			return (NULL);
}
