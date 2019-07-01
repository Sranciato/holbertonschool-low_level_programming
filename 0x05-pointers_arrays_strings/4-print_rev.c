#include "holberton.h"
/**
 * reset_to_98 - check the code for Holberton School students.
 * @n: variable name.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	for (; *s >= 0; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
