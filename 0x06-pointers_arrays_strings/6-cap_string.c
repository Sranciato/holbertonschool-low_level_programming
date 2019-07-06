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
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (x = 0; s[x] != '\0'; x++)
			{
				if (c[i - 1] == s[x])
				{
					c[i] = c[i] - 32;
				}
			}
			x = 0;
		}
	}
	return (c);
}
