#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @c: variable name.
 * Return: Capital words.
 */
char *cap_string(char *c)
{
	int i, j, x;
	char *s = " ,\t\n,;.!?\"(0{}";

	for (i = 0; c[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		if (c[j] >= 'a' && c[j] <= 'z')
		{
			for (x = 0; s[x] != '\0'; x++)
			{
				if (c[j - 1] == '\t')
				{
					c[j - 1] = ' ';
				}
				if (c[j - 1] == s[x])
				{
					c[j] = c[j] - 32;
				}
			}
			x = 0;
		}
	}
	c[j] = '\0';
	return (c);
}
