#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code for Holberton School students.
 * @width: variable name.
 * @height: variable 2.
 * Return: pointer.
 */
int **alloc_grid(int width, int height)
{
	int i, size;
	int **p;

	size = height * width;
	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * size);

	if (p)
	{
		for (i = 0; i < width; i++)
			p[i] = (int *) malloc(size * sizeof(int));
		return (p);
	}
	return (NULL);
}
