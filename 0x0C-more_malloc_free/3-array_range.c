#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - check the code for Holberton School students.
 * @min: variable name.
 * @max: variable 2.
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min) + 1);
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
