#include "variadic_functions.h"
/**
 * print_numbers - writes the character c to stdout
 * @separator: comma.
 * @n: number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, arg;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(valist, unsigned int);
		printf("%i", arg);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
