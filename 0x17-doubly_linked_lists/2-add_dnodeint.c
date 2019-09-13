#include "lists.h"
/**
 * add_dnodeint - add node at beginning of list.
 * @head: head of list.
 * @n: data of each node.
 * Return: address of new element or NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	(*head) = new;

	return (new);
}
