#include "holberton.h"
/**
 * get_bit - return the index of a binary number.
 * @n: number to be converted.
 * @index: index of bit.
 * Return: value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift, and, digits[64];
	int i;

	for (i = 63; i >= 0; i--)
	{
		shift = n >> i;
		and = shift & 1;
		digits[i] = and;
	}
	if (index < 64)
		return (digits[index]);
	return (-1);
}
