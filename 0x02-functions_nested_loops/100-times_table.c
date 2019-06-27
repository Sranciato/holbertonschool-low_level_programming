#include "holberton.h"

/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 */
void print_times_table(int n)
{
	int a, b, i;

	for (a = 0; a <= n; a++)
	{
		if (n > 15 || n < 0)
			break;
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			i = a * b;
			if (i < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(i + '0');
			}
			else if (i > 9 && i < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((i / 10) / 10) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
