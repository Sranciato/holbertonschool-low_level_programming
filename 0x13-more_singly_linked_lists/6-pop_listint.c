#include "lists.h"
/**
 * pop_listint - delete head node in a list.
 * @head: head node.
 * Return: data from head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head, *tmp = *head;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = new->next;

	free(tmp);
	return (data);
}
