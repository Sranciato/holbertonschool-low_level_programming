#include "lists.h"
/**
 * add_node - print a linked list.
 * @head: pointer to list.
 * @str: string of struct.
 * Return: list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t *new;
	char *string = strdup(str);

	if (string == NULL)
		return (NULL);
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
	new->next = *head;

	*head = new;

	return (new);
}
