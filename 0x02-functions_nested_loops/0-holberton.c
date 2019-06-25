#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};

	for (n = 0; n < 9; n++)
	{
		_putchar(a[n]);
	}
	_putchar('\n');
	return (0);
}
