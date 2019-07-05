#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: variable name.
 * @src: variable 2.
 * @n: int.
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *dlen = dest;
	char *slen = src;

	for (i = 0; *(dlen + i) != '\0'; i++)
		;
	for (j = 0; *(slen + j) != '\0' && n--; j++)
	{
		*(dlen + (i + j)) = *(slen + j);
	}

	*(dlen + (i + j)) = '\0';

	return (dlen);
}
