#include "holberton.h"
#include <stdlib.h>
/**
 * _memset - check the code for Holberton School students.
 * @s: variable name.
 * @b: variable 2.
 * @n: int.
 * Return: char.
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
