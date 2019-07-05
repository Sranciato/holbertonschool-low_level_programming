#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @c: variable name.
 * Return: character.
 */
char *string_toupper(char *c)
{
	int i, j;

	for (; c[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		if (c[j] >= 'a' && c[j] <= 'z')
		{
			c[j] = c[j] - 32;
		}
	}
	return (c);
}
