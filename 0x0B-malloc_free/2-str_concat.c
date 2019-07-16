#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - check the code for Holberton School students.
 * @s1: variable name.
 * @s2: variable 2.
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1len, s2len;
	char *p;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
	}
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;
	p = malloc(sizeof(char) * (s1len + s2len) + 1);
	for (i = 0; i < s1len; i++)
		p[i] = s1[i];
	for (j = 0; j <= s2len; j++)
		p[s1len + j] = s2[j];
	if (p)
		return (p);
	return (NULL);
}
