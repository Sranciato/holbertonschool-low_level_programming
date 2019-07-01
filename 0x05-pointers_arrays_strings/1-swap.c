#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: variable name.
 * @b: variable name 2.
 */
void swap_int(int *a, int *b)
{
	int p;
	int *p1 = a;
	int *p2 = b;

	p = *a;
	*p1 = *b;
	*p2 = p;
}
