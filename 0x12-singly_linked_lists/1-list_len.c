#include "lists.h"
/**
 * list_len - print a linked list.
 * @h: pointer to list.
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
