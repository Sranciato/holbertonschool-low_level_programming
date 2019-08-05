#include "lists.h"
/**
 * print_listint - print all elements of list.
 * @h: List data type.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
