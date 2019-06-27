#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: variable name.
 */
void print_square(int size)
{
	int i;
	int a;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
