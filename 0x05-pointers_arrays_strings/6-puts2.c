#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @str: variable name.
 */
void puts2(char *str)
{
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
