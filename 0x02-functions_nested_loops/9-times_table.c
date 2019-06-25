#include "holberton.h"

/**
 * times_table - writes the character c to stdout
 * @: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a;
	int b;
	int n;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			n = a * b;
			if (n < 10)
			{
				if (n > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				}
				else
				{
					_putchar(n + '0');
				}
			}
			else
			{
					_putchar(',');
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
