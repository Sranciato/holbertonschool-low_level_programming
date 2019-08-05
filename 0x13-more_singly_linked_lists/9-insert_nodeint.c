#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given position.
 * @head: beginning of list.
 * @idx: index to add node.
 * @n: data for new node.
 * Return: new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *search = *head;
	unsigned int i = 0;

	if (search == NULL)
		return (NULL);
	while (search)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = search->next;
			search->next = new;
			return (new);
		}
		search = search->next;
		i++;
	}
	return (NULL);
}
