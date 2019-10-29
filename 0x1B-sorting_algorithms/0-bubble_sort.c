#include "sort.h"
/**
 * bubble_sort - assort integers in ascending order.
 * @array: array of integers.
 * @size: size of array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	int length = size;

	for (size -= 1; size > 0; size--)
	{
		for (i = 0; i < size; i++)
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, length);
			}
	}
}
