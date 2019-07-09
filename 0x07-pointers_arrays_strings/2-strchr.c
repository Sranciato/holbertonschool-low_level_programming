#include "holberton.h"
#define NULL 0
/**
 * _strchr - check the code for Holberton School students.
 * @s: variable name.
 * @c: variable 2.
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	char *s1 = s;
	for (; *s1 != '\0'; s1++)
	{
		if (*s1 == c)
			return (s1);
	}
	return (0);
}
