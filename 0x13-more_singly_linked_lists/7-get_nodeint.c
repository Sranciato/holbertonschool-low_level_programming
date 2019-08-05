#include "lists.h"
/**
 * get_nodeint_at_index - Return node at given index of list.
 * @head: Start of list.
 * @index: number of index to retrieve.
 * Return: Node at given index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *search = head;

	if (search == NULL)
		return (NULL);
	while (search)
	{
		if (i == index)
		{
			return (search);
		}
		search = search->next;
		i++;
	}
	return (0);
}
