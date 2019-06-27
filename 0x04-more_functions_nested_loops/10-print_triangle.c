#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size: variable name.
 */
void print_triangle(int size)
{
	int i;
	int a;
	int b;
	int n = size - 1;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (a = n; a > i; a--)
			{
				_putchar(' ');
			}
			for (b = 0; b < i + 1; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
