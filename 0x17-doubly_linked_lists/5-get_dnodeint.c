#include "lists.h"
/**
 * get_dnodeint_at_index - get node at specific index.
 * @head: beginning of list.
 * @index: index of node to return.
 * Return: node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *search = head;
	unsigned int i = 0;

	while (search)
	{
		if (i == index)
			return (search);
		search = search->next;
		i++;
	}
	return (NULL);
}
