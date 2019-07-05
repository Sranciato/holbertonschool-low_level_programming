#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: variable name.
 * @src: variable 2.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *dlen = dest;
	char *slen = src;

	for (i = 0; *(dlen + i) != '\0'; i++)
		;
	for (j = 0; *(slen + j) != '\0'; j++)
	{
		*(dlen + (i + j)) = *(slen + j);
	}

	*(dlen + (i + j)) = '\0';

	return (dlen);
}
