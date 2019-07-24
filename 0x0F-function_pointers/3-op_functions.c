#include "3-calc.h"
/**
 * op_add - adds a and b.
 * @a: integer 1.
 * @b: integer 2.
 * Return: function pointer.
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - subtracts a and b.
 * @a: integer 1.
 * @b: integer 2.
 * Return: function pointer.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a and b.
 * @a: integer 1.
 * @b: integer 2.
 * Return: function pointer.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a and b.
 * @a: integer 1.
 * @b: integer 2.
 * Return: function pointer.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modules of a and b
 * @a: integer 1.
 * @b: integer 2.
 * Return: function pointer.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
