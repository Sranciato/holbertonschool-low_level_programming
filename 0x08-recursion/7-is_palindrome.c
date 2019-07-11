#include "holberton.h"
#include <stdio.h>

int counter(char *s, int i, int p);
int length(char *s);

/**
 * length - check the code for Holberton School students.
 * @s: variable name.
 * Return: Always 0.
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + length(++s));
}
/**
 * counter - check the code for Holberton School students.
 * @s: variable name.
 * @i: variable 2.
 * @p: variable 3.
 * Return: Always 0.
 */
int counter(char *s, int i, int p)
{
	if (i == 0)
		i = length(s);
	if (s[i - 1] != s[p])
	{
		return (0);
	}
	else if (s[i - 1] == s[p] && p <= i)
	{
		printf("hey");
		return (counter(s, --i, ++p));
	}
	else
	{
		return (1);
	}
}
/**
 * is_palindrome - Main function.
 * @s: variable number.
 * Return: counter function.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (counter(s, 0, 0));
}
