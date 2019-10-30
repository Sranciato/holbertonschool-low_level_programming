#include "sort.h"
/**
 * insertion_sort_list - Sort list by swapping each node.
 * @list: head of doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list), *traverse, *tr_hold, *cu_hold;

	if (!list || !(*list))
		return;

	for (current = current->next; current; current = current->next)
	{
		for (traverse = current; traverse; traverse = traverse->prev)
		{
			if (traverse->n > current->n)
			{
				tr_hold = traverse->prev;
				cu_hold = current->next;
				if (tr_hold)
					tr_hold->next = current;
				if (cu_hold)
					cu_hold->prev = traverse;
				traverse->prev = current;
				current->prev = tr_hold;
				traverse->next = cu_hold;
				current->next = traverse;
				if (current->prev == NULL)
					(*list) = current;
				print_list(*list);
			}
		}
	}
}
