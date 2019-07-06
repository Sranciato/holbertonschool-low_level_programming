#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 * @c: variable name.
 * Return: Capital words.
 */
char *rot13(char *c)
{
	int i, x;
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWQYZABCDEFGHIJKLM";
	char *p = c;

	for (i = 0; p[i] != '\0'; i++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (p[i] == s[x])
			{
				p[i] = s2[x];
				break;
			}
		}
	}
	return (p);
}
