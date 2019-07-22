#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int nstrings(char *s);
unsigned int mallet(char *t);

/**
 * nstrings - check the code for Holberton School students.
 * @s: variable name.
 * Return: unsigned int.
 */
unsigned int nstrings(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32 && s[i + 1] == 32)
		{
			count++;
		}
	}
	return (count);
}
/**
 * mallet - check the code for Holberton School students.
 * @t: variable 2.
 * Return: pointer.
 */
unsigned int mallet(char *t)
{
	int count = 0;

	for (; *t != '\0'; t++)
	{
		if (*t != 32)
		{
			count++;
		}
		if (*(t + 1) == 32 && *t != 32)
			break;
	}
	return (count);
}
/**
 * strtow - check the code for Holberton School students.
 * @str: variable 2.
 * Return: double pointer.
 */
char **strtow(char *str)
{
	unsigned int i, x, words = 0;
	char **p;

	if (!str || *str == '\0')
		return (NULL);
	words = nstrings(str);
	p = malloc((words + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		p[i] = malloc(mallet(str) + 1);
		if (p[i] == NULL)
		{
			while ((int)i >= 0)
			{
				i--;
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		for (x = 0; *str != '\0'; str++)
		{
			if (*str != 32)
			{
				p[i][x] = *str;
				x++;
				if (*(str + 1) == 32)
				{
					str++;
					p[i][x] = '\0';
					break;
				}
			}
		}
	}
	p[i + 1] = NULL;
	return (p);
}
