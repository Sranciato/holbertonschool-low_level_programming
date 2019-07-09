#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: variable name.
 * @accept: variable 2.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x;
	unsigned int b = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (b != i)
		{
			break;
		}
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*(s + i) == *(accept + x))
			{
				b++;
			}
		}
	}
	return (b);
}
