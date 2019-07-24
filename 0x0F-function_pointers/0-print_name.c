#include "function_pointers.h"
/**
 * print_name - writes the character c to stdout
 * @name: The character to print
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
