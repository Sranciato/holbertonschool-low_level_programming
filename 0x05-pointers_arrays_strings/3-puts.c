#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: variable name.
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (; *str; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
