#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given position.
 * @head: beginning of list.
 * @index: index of node to be deleted.
 * Return: 1 if success, 0 if failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *new = *head, *search = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (search)
	{
		if (index == 0)
		{
			new = *head;
			*head = new->next;
			free(new);
			return (1);
		}
		if (i == index - 1)
		{
			old = search;
		}
		if (i == index)
		{
			old->next = search->next;
			free(search);
			return (1);
		}
		search = search->next;
		i++;
	}
	return (-1);
}
