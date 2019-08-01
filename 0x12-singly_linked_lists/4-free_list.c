#include "lists.h"
/**
 * free_list - print a linked list.
 * @head: pointer to list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
