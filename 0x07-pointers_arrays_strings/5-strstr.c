#include "holberton.h"
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: variable name.
 * @needle: variable 2.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	int x, i, len;

	if (*haystack == '\0')
		return (haystack);
	for (len = 0; needle[len] != '\0'; len++)
		;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		x = 0;
		if (needle[x] == haystack[i + x])
		{
			while (x <= len)
			{
				if (x == len)
				{
					return (haystack + i);
				}
			x++;
			}
		}
	}
	return (0);
}
