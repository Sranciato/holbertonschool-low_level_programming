#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code for Holberton School students.
 * @b: variable name.
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
