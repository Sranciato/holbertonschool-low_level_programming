#include "search_algos.h"
/**
 * linear_search - use linear search to find value in array
 * @array: array of integers.
 * @size: size of array.
 * @value: value of integer to search for.
 * Return: index where value was found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
