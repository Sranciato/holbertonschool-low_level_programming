#include "sort.h"
/**
 * lomuto - partition for quick sort.
 * @array: array of integers.
 * @low: lowest integer.
 * @high: highest integer.
 * @size: size of array.
 * Return: i
 */
int lomuto(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j = low, hold;
	int check = 0;

	if (size)
		size = size;
	for (; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			check = 1;
			i++;
			hold = array[i];
			array[i] = array[j];
			array[j] = hold;
		}
	}
	if (check == 1)
		print_array(array, size);
	hold = array[i + 1];
	array[i + 1] = array[high];
	array[high] = hold;
	if (check == 0)
		print_array(array, size);
	return (i + 1);
}
/**
 * _sort - quick sort.
 * @array: array of integers.
 * @low: lowest integer.
 * @high: highest integer.
 * @size: size of array.
 */
void _sort(int array[], int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = lomuto(array, low, high, size);
		_sort(array, low, pi - 1, size);
		_sort(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - quick sort algorithm.
 * @array: array of integers.
 * @size: size of array.
 */
void quick_sort(int *array, size_t size)
{

	_sort(array, 0, (int)size - 1, size);
	print_array(array, size);
}
