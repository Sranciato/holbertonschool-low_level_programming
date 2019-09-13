#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of list.
 * @head: beginnign of list.
 * @n: data to be added to new node.
 * Return: new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}

	while (end->next)
		end = end->next;

	end->next = new;
	new->prev = end;

	return (new);
}
