#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: variable name.
 * @argv: variable 2.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int count;
	int cents = atoi(argv[1]);
	int c[5] = {25, 10, 5, 2, 1};
	int x;

	if (argc == 2 && cents >= 0)
	{
		count = 0;
		cents = atoi(argv[1]);
		for (; cents > 0; count++)
		{
			for (x = 0; x < 5; x++)
			{
				if (cents - c[x] >= 0)
				{
					cents -= c[x];
					break;
				}
			}
		}
		printf("%i\n", count);
		return (0);
	}
	else if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("Error\n");
	return (1);
}
