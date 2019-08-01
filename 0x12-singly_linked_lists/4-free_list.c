#include "lists.h"
/**
 * free_list - print a linked list.
 * @head: pointer to list.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		list_t *tmp1 = tmp;

		tmp = tmp->next;
		free(tmp1);
	}
}
