#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a: variable name.
 * @size: variable 2.
 * Return: char.
 */
void print_diagsums(int *a, int size)
{
	int *p = a;
	int l = 0;
	int suml = 0;
	int sumr = 0;
	int r = size - 1;

	for (; l < (size * size); l += (size + 1), r += (size - 1))
	{
		suml = suml + *(p + l);
		sumr = sumr + *(p + r);
	}
	printf("%d, %d\n", suml, sumr);
}
