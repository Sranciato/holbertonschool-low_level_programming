#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: variable name.
 * Return: Capital words.
 */
void print_number(int n)
{
	int y;

	if (n > 0)
	{
		n *= -1;
		for (y = 1000000000; y > 0; y /= 10)
		{
			if (n / y != 0)
			{
				_putchar(((-n / y) % 10) + '0');
			}
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0 && n != -2147483648)
	{
		_putchar('-');
		for (y = 1000000000; y > 0; y /= 10)
		{
			if (-n / y != 0)
			{
				_putchar(((-n / y) % 10) + '0');
			}
		}
	}
	else
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
	}
}
