#include "holberton.h"
/**
 * clear_bit - print the binary of a given number.
 * @n: number to be converted.
 * @index: index where binary 1 will be added.
 * Return: 1 if success. -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = ((*n & ~mask) | ((0 << index) & mask));
	if (!n)
		return (-1);
	return (1);
}
