#include "variadic_functions.h"
/**
 * print_strings - writes the character c to stdout
 * @separator: The character to print
 * @n: function pointer.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char *);
			if (s == NULL)
				printf("(nil)");
			else if (s && (separator == NULL || i == 0))
				printf("%s", s);
			else
				printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(valist);
}
