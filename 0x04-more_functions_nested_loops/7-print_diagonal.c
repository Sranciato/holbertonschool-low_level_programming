#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: variable name.
 */
void print_diagonal(int n)
{
	int i;
	int a;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
