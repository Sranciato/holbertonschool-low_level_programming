#include "lists.h"
/**
 * free_listint2 - free and set head to null.
 * @head: double pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head, *tmp1;

	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
	*head = NULL;
}
