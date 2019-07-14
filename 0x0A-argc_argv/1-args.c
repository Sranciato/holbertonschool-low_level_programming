#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: variable name.
 * @argv: variable 2.
 * Return: int.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
