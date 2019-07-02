#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str: variable name.
 */
void puts_half(char *str)
{
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	if (size % 2 == 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i >= size / 2)
			{
				_putchar(str[i]);
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (i > (size - 1) / 2)
			{
				_putchar(str[i]);
			}
		}
		_putchar('\n');
	}
}
