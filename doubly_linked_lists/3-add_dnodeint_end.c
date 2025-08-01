#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un noeud a la fin liste doublement chaînée.
 * @head: Pointeur vers le pointeur du premier nœud de la liste.
 * @n: Valeur du nouveau noeud.
 * Return: Adresse du nouveau noeud, ou NULL si l'ajout a échoué.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)

	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = new;
	new->prev = temp;

		return (new);
}
