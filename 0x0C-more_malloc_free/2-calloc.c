#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check the code for Holberton School students.
 * @size: variable name.
 * @nmemb: variable 2.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	if (p == NULL)
		return (NULL);
	return (p);
}
