#include "lists.h"
/**
 * free_list - print a linked list.
 * @head: pointer to list.
 */
void free_list(list_t *head)
{
	list_t *tmp = head, *tmp1;

	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
