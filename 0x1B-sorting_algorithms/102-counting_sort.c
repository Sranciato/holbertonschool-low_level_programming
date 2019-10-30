#include "sort.h"
/**
 * counting_sort - sorts integers in ascending order.
 * @array: array of integers.
 * @size: size of array.
 */
void counting_sort(int *array, size_t size)
{
	size_t i, x, j, max = 0;
	int count[1024], *count_p;

	if (!array)
		return;

	for (i = 0; array[i]; i++)
	{
		if ((size_t)array[i] > max)
			max = array[i];
	}
	max++;
	memset(count, 0, max * sizeof(int));
	for (i = 0; i < size; i++)
	{
		count[array[i]]++;
	}
	for (i = 1; i < max; i++)
	{
		count[i] += count[i - 1];
	}
	count_p = count;
	print_array(count_p, max);
	for (i = max - 1; i > 0; i--)
		count[i] -= count[i - 1];
	for (i = 0, x = 0; i < max; i++)
	{
		for (j = 0; j < (size_t)count[i]; x++, j++)
			array[x] = i;
	}
}
