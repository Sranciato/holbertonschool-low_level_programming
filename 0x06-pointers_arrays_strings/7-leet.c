#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 * @c: variable name.
 * Return: Capital words.
 */
char *leet(char *c)
{
	int i, x;
	char *s = "aeotl";
	char *s2 = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (c[i] == s[x] || c[i] == s[x] - 32)
			{
				c[i] = s2[x];
			}
		}
		x = 0;
	}
	return (c);
}
