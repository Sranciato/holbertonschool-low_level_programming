#include "lists.h"
/**
 * free_listint - free each node.
 * @head: beginning of list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head, *tmp1;

	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
