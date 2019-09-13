#include "lists.h"
/**
 * free_dlistint - free doubly linked list.
 * @head: beginning of list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *tmp1;

	while (tmp)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
