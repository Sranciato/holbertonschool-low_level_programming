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

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (search)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = search->next;
			search->next = new;
			return (new);
		}
		search = search->next;
		i++;
	}
	free(new);
	return (NULL);
}
