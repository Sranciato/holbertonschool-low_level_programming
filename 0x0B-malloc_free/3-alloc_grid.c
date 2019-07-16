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
	int i;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);

	if (p)
	{
		for (i = 0; i < height; i++)
			p[i] = malloc(width * sizeof(int));
		return (p);
	}
	return (NULL);
}
