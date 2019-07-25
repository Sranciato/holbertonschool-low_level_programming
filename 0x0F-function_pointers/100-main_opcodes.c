#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print.
 * @argv: name of dog.
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	int i, a;
	unsigned char *f;

	f = (unsigned char *)&main;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
	{
		if (i < a - 1)
			printf("%02x ", f[i]);
		else
			printf("%02x\n", f[i]);
	}
	return (0);
}
