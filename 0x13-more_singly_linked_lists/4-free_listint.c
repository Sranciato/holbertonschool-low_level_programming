#include "lists.h"
/**
 * free_listint - free each node.
 * @head: beginning of list.
 */
void free_listint(listint_t *head)
{
	list_t *tmp = head, *tmp1;

	while (tmp != NULL)
	{
		free(tmp->str);
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
