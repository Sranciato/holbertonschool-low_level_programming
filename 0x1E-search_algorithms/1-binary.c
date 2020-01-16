#include "search_algos.h"
void print_array(int array[], size_t left, size_t right);
/**
 * binary_search - search for value using binary search.
 * @array: array of integers.
 * @size: size of array.
 * @value: value of integer to search for.
 * Return: index where value was found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	middle = 0;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
/**
 * print_array - prints array each time it changes
 * @array: array of integers.
 * @left: beginning of new array.
 * @right: end of new array.
 */
void print_array(int array[], size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%i", array[i]);
		if (i < right)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
