#include "lists.h"
/**
 * free_listint - free each node.
 * @head: beginning of list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		printf("%d\n", tmp->n);
		free(tmp);
	}
	free(head);
}
