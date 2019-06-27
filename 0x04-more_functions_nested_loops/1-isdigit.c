#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable name.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
