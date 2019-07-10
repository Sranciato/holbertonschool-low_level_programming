#include "holberton.h"
/**
 * root - check the code for Holberton School students.
 * @n: variable name.
 * @i: variable 2.
 * Return: Always 0.
 */
int root(int n, int i)
{
	if ((i * i) < n)
		return (root(n, i + 1));
	else if ((i * i) == n)
		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - Main function.
 * @n: variable number.
 * Return: root function.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root(n, 1));
}
