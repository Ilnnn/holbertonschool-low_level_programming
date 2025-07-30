#include "lists.h"
/**
 * add_dnodeint - ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: adresse du pointeur vers le début de la liste
 * @n: valeur entière à stocker dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL en cas d’échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;

		return (new);
}
