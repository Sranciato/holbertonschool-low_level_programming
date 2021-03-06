#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - check the code for Holberton School students.
 * @argc: variable name.
 * @argv: variable 2.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int i, val;
	int sum = 0;
	char *end;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			val = strtol(argv[i], &end, 10);
			if (!end[0] && val >= 0)
			{
				sum += val;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		if (sum <= INT_MAX)
		{
			printf("%i\n", sum);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("0\n");
	return (0);
}
