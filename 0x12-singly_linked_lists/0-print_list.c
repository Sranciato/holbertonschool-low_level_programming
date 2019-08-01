#include "lists.h"
/**
 * print_list - print a linked list.
 * @h: pointer to list.
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (i);
}
