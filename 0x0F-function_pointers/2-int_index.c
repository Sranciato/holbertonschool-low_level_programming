#include "function_pointers.h"
/**
 * int_index - writes the character c to stdout
 * @array: The character to print
 * @size: function pointer.
 * @cmp: function pointer.
 * Return: integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && cmp == NULL)
		return (NULL);
	if (size <= 0)
		return (-1);
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
