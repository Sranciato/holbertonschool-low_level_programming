#include "variadic_functions.h"
/**
 * print_numbers - writes the character c to stdout
 * @separator: comma.
 * @n: number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s%i", separator, va_arg(valist, unsigned int));
		else if (i == 0 || separator == NULL)
			printf("%i", va_arg(valist, unsigned int));
	}
	printf("\n");
	va_end(valist);
}
