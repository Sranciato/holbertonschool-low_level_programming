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
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	printf("ERROR\n");
	return (1);
}
