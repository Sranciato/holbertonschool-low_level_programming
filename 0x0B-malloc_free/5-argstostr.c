#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int len(char *s);

/**
 * len - check the code for Holberton School students.
 * @s: variable 2.
 * Return: pointer.
 */
int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * argstostr - check the code for Holberton School students.
 * @ac: variable name.
 * @av: variable 2.
 * Return: pointer.
 */
char *argstostr(int ac, char **av)
{
	int i, temp = 0, x, length;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	p = (char *)malloc(sizeof(char *) * ac + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac + 1; i++)
	{
		length = len(av[i]);

		p[i] = malloc(sizeof(char) * (length + 1));

		if (p == NULL)
			return (NULL);

		for (x = 0; x <= length; x++)
			p[x + temp] = av[i][x];

		temp += x;
	}
	return (p);


}
