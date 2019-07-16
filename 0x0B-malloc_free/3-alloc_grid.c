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

	p = (int **)malloc(sizeof(int *) * height);

	if (!p)
		return (NULL);
	if (p)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(width * sizeof(int));
			if (!p[i])
				return (NULL);
		}
		return (p);
	}
	return (NULL);
}
