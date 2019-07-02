#include "holberton.h"
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: variable name.
 * @src: variable 2.
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int size, x;

	for (size = 0; src[size] != '\0'; size++)
	{
	}

	for (x = 0; x <= size; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
