#include "holberton.h"
#include <stdio.h>

/**
 * times_table - writes the character c to stdout
 * @: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (;n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		for (;n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
