#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - writes the character c to stdout
 * @n: The character to print
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}

	va_end(valist);

	return (sum);
}
