#include "lists.h"
/**
 * add_dnodeint - ajoute un noeud au début d'une liste doublement chaînée
 * @head: pointeur vers le pointeur du premier élément
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mew;

	if (head == NULL)
	{
		return (NULL);
	}

	mew = malloc(sizeof(dlistint_t));

	if (mew == NULL)
	{
		return (NULL);
	}
		mew->n = n;

		mew->prev = NULL;
		mew->next = *head;


	if (*head != NULL)
	(*head)->prev = mew;

	*head = mew;

	return (mew);
}
