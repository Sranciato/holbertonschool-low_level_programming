#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: variable name.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
