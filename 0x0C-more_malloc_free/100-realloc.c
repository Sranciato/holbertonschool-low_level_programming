#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - check the code for Holberton School students.
 * @ptr: variable name.
 * @old_size: variable 2.
 * @new_size: variable 3.
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
			p[i] = ((char *)ptr)[i];
		free(ptr);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
