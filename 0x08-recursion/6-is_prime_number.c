#include "holberton.h"
/**
 * root - check the code for Holberton School students.
 * @n: variable name.
 * @i: variable 2.
 * Return: Always 0.
 */
int root(int n, int i)
{
	if ((n % i) != 0 && i < 10)
		return (root(n, i + 1));
	else if (n % i == 0 || n == 1)
		return (0);
	else
		return (1);
}
/**
 * is_prime_number - Main function.
 * @n: variable number.
 * Return: root function.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (root(n, 2));
}
