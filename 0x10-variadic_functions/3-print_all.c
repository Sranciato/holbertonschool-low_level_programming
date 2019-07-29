#include "variadic_functions.h"

void checker(int a, int i);

/**
 * checker - print anything.
 * @a: check.
 * @i: i value
 */
void checker(int a, int i)
{
	while (a == 1 && i > 0)
	{
		printf(", ");
		break;
	}
}
/**
 * print_all - print anything.
 * @format: variable types.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *string;
	int check = 0, i = 0;

	va_start(valist, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			checker(check, i);
			printf("%c", va_arg(valist, int));
			check = 1;
			break;
		case 'i':
			checker(check, i);
			printf("%i", va_arg(valist, int));
			check = 1;
			break;
		case 'f':
			checker(check, i);
			printf("%f", va_arg(valist, double));
			check = 1;
			break;
		case 's':
			checker(check, i);
			string = va_arg(valist, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			check = 1;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
