#include "sort.h"
/**
 * swap_rev - swaps nodes when traversing backwards.
 * @list: head of list.
 * @back: prev node.
 * @current: current node.
 */
void swap_rev(listint_t **list, listint_t *back, listint_t *current)
{
	current->prev = back->prev;
	back->prev = current;
	back->next = current->next;
	current->next = back;
	if (back->next)
		back->next->prev = back;
	if (current->prev == NULL)
		*list = current;
	else
		current->prev->next = current;
}
/**
 * swap - swaps nodes when traversing forward.
 * @list: head of list.
 * @current: current node.
 * @nex: next node.
 */
void swap(listint_t **list, listint_t *current, listint_t *nex)
{
	nex->prev = current->prev;
	current->prev = nex;
	current->next = nex->next;
	nex->next = current;
	if (current->next)
		current->next->prev = current;
	if (nex->prev == NULL)
	{
		*list = nex;
	}
	else
		nex->prev->next = nex;
}
/**
 * cocktail_sort_list - variation of bubble sorting.
 * @list: head of list.
 */
void cocktail_sort_list(listint_t **list)
{
	int check = 1;
	listint_t *current = (*list);

	if (!list || !(*list))
		return;

	while (check)
	{
		check = 0;
		for (; current->next; current = current->next)
		{
			if (current->n > current->next->n)
			{
				swap(list, current, current->next);
				current = current->prev;
				print_list(*list);
				check = 1;
			}
		}
		for (; current->prev; current = current->prev)
		{
			if (current->n < current->prev->n)
			{
				swap_rev(list, current->prev, current);
				current = current->next;
				print_list(*list);
				check = 1;
			}
		}
	}
}
