#include "holberton.h"
/**
 * _print_rev_recursion - check the code for Holberton School students.
 * @s: variable name.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	char *s1 = s;

	if (*s1 == '\0')
	{
		return;
	}
	_print_rev_recursion(s1 + 1);
	s1--;
	_putchar(*s1);
}
