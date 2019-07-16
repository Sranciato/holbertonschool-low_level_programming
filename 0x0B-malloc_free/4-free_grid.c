#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - check the code for Holberton School students.
 * @grid: variable name.
 * @height: variable 2.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
