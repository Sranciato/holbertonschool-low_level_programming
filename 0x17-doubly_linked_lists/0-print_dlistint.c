#include "lists.h"
/**
 * print_dlistint - print all the elements of list
 * @h: head of list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
