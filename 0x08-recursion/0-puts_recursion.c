#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: variable name.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	char *s1 = s;

	_putchar(*s1);
	if (*s1 != '\0')
	{
		_puts_recursion(s1 + 1);
	}
	if (*s1 == '\0')
	_putchar('\n');
}
