#include <holberton.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};

	for (n = 0; n < 9; n++)
	{
		putchar(a[n]);
	}
	putchar('\n');
	return (0);
}
