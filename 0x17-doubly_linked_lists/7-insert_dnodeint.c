#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given index.
 * @h: beginning of list.
 * @idx: index of node to be added.
 * @n: data for new node.
 * Return: new node at given index.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *search = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = (*h);
		new->prev = NULL;
		if ((*h) != NULL)
			(*h)->prev = new;
		(*h) = new;
		return (new);
	}
	while (search)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = search->next;
			new->prev = search;
			search->next = new;
			if (new->next)
				new->next->prev = new;
			return (new);
		}
		search = search->next;
		i++;
	}
	free(new);
	return (NULL);
}
