#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @c: variable name.
 * Return: Capital words.
 */
char *cap_string(char *c)
{
	int i, x;
	char *s = " \t\n,;.!\?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (x = 0; c[i] >= 'a' && c[i] <= 'z' && s[x] != '\0'; x++)
		{
			if (c[i - 1] == s[x] || c[i] == c[0])
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}
