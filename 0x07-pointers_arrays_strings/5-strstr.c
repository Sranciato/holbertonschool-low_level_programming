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


	for (len = 0; *(needle + len) != '\0'; len++)
		;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (x = 0; x <= len; x++)
		{
			if (*(needle + x) == *(haystack + (i + x)))
			{
				if (x == len)
				{
					return (haystack + i);
				}
			}
		}
	}
	return (0);
}
