#include "lists.h"
/**
 * sum_listint - return sum of all data.
 * @head: Start of list.
 * Return: int.
 */
int sum_listint(listint_t *head)
{
	listint_t *search = head;
	int sum = 0;

	if (search == NULL)
		return (0);
	while (search)
	{
		if (search->n > -1)
			sum += search->n;
		else
			sum += 0;
		search = search->next;
	}
	return (sum);
}
