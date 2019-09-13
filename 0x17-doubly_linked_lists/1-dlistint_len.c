#include "lists.h"
/**
 * dlistint_len - print all the elements of list
 * @h: head of list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
