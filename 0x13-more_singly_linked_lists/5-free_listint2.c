#include "lists.h"
/**
 * free_listint2 - free and set head to null.
 * @head: double pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
	free(*head);
}
