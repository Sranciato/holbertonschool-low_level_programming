#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: variable name.
 * @n: variable 2.
 * Return: char.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end, pl, i;

	for (i = 0; i < n; i++)
		;

	end = i - 1;
	for (; start <= end; start++, end--)
	{
		pl = a[start];
		a[start] = a[end];
		a[end] = pl;
	}
}
