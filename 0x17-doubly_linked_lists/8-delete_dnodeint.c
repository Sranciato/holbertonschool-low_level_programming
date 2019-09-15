#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index.
 * @head: beginning of list.
 * @index: index of node to be deleted.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *search = *head;
	unsigned int i = 0;

	while (search)
	{
		if (i == index)
		{
			if (search->next)
				search->next->prev = search->prev;
			if (index > 0)
				search->prev->next = search->next;
			else if (index == 0)
			{
				search = (*head);
				(*head) = search->next;
			}
			free(search);
			return (1);
		}
		search = search->next;
		i++;
	}
	return (-1);
}
