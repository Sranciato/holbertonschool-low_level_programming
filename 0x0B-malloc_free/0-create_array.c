#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - check the code for Holberton School students.
 * @size: variable name.
 * @c: variable 2.
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);
	if (p)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	return (0);
}
