#include "holberton.h"
/**
 * _strpbrk - check the code for Holberton School students.
 * @s: variable name.
 * @accept: variable 2.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	for (; *s != '\0'; s++)
	{
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*s == *(accept + x))
			{
				return (s);
			}
		}
	}
	return ('\0');
}
