#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned int.
 * @b: string of 0's and 1's.
 * Return: decimal value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, sum = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += base;
		base = base * 2;
	}
	return (sum);
}
