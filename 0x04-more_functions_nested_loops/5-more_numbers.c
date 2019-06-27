#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 * @: variable name.
 */
void more_numbers(void)
{
	int i;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
