#include "sort.h"
/**
 * shell_sort - function that shell sorts(knuth seq)
 * @array: array of data
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, x, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (; gap < size / 3; gap = gap * 3 + 1)
		continue;
	while (gap > 0)
	{
		for (x = gap; x < size; x++)
		{
			temp = array[x];
			for (j = x; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];

			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
