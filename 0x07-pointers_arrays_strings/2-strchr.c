#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: variable name.
 * @c: variable 2.
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
