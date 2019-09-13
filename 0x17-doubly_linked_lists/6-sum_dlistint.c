#include "lists.h"
/**
 * sum_dlistint - add all of the nodes together.
 * @head: beginning of list.
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *search = head;
	int sum = 0;

	if (!search)
		return (sum);
	while (search)
	{
		sum += search->n;
		search = search->next;
	}
	return (sum);
}
