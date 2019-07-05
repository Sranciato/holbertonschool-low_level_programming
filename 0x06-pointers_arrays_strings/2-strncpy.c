#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: variable name.
 * @src: variable 2.
 * @n: int.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *d = dest;
	char *s = src;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	for (j = 0; j <= i && j < n; j++)
	{
		*(d + j) = *(src + j);
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (d);
}
