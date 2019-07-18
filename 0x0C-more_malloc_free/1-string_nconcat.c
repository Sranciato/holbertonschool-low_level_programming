#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: variable name.
 * @s2: variable 2.
 * @n: variable 3.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1len, s2len;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;
	if (n >= s2len)
		n = s2len;
	p = malloc(sizeof(char) * (s1len + n) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[s1len + j] = s2[j];
	p[s1len + j] = '\0';
	return (p);
}
