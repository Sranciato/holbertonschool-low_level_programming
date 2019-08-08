#include "holberton.h"
/**
 * print_binary - print the binary of a given number.
 * @n: number to be converted.
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift, and;
	int i, flag = 0;
	char digit;

	if (n == 0)
		putchar('0');
	for (i = 63; i >= 0; i--)
	{
		shift = n >> i;
		and = shift & 1;
		digit = '0' + and;
		if (digit == '1')
			flag = 1;
		if (flag == 1)
			_putchar(digit);
	}
}
