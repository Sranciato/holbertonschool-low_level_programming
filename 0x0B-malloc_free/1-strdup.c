#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: variable name.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i, len;
	char *p = str;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	p = malloc(sizeof(char) * len + 1);
	if (p)
	{
		for (i = 0; i <= len; i++)
			p[i] = str[i];
		return (p);
	}
	return (NULL);
}
