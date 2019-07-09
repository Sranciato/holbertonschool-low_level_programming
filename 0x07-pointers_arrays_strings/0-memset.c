#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 * @s: variable name.
 * @b: variable 2.
 * @n: int.
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
