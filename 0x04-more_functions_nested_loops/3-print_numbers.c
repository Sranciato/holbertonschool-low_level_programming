#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @: variable name.
 */
void print_numbers(void)
{
	int loop;

	for (loop = 0; loop < 10; loop++)
		_putchar(loop + '0');
	_putchar('\n');
}
