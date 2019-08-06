#include "lists.h"
/**
 * add_nodeint_end - add node to beginning of list.
 * @head: beginning of list.
 * @n: data.
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
