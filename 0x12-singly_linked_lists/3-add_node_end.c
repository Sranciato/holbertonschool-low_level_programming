#include "lists.h"
/**
 * add_node_end - print a linked list.
 * @head: pointer to list.
 * @str: incoming string.
 * Return: list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *new;
	list_t *last = *head;
	char *string = strdup(str);

	if (string == NULL)
	{
		return (NULL);
	}
	for (length = 0; string[length] != '\0'; length++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(string);
		return (NULL);
	}
	new->len = length;
	new->str = string;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
