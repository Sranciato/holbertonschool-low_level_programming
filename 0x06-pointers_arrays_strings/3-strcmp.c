#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: variable name.
 * @s2: variable 2.
 * Return: char.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
