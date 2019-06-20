#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int i = 48;
	int a[] = {44, 32};

	while (i <= 57)
	{
		putchar(i);
		while (n < 2 && i != 57)
		{
			putchar(a[n]);
			n++;
		}
		n = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
