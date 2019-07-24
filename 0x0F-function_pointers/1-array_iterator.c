#include "function_pointers.h"
/**
 * array_iterator - writes the character c to stdout
 * @array: The character to print
 * @size: function pointer.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
