#include "sort.h"
/**
 * swap - swaps index's
 * @dd: index 1.
 * @dp: index 2.
 */
void swap(int *dd, int *dp)
{
	int temp = *dd;
	*dd = *dp;
	*dp = temp;
}
/**
 * selection_sort - function that uses selection sort
 * @array: array used to contain data
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int inc, j, min_index;

	for (inc = 0; inc < size - 1; inc++)
	{
		min_index = inc;
		for (j = inc + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		swap(&array[min_index], &array[inc]);
		if (inc != min_index)
		{
			print_array(array, size);
		}
	}
}
