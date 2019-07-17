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
	int i, x, length = 0, l, c;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
		length += len(av[l]);

	p = malloc(sizeof(char) * (length + ac + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++, c++)
			p[c] = av[i][x];
		p[c] = '\n';
		c++;
	}
	return (p);


}
