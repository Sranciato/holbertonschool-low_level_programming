#include "holberton.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + 48);
	}
	else
	{
		_putchar((-n % 10) + 48);
	}
	return (4);
}
