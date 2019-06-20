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
	int i;
	int a[] = {44, 32};

	for (i = 0; i < 100; i++)
	{
		putchar((i/10)+'0');
		putchar((i%10)+'0');
		while (n < 2 && i != 99)
		{
			putchar(a[n]);
			n++;
		}
		n = 0;
	}
	putchar('\n');
	return (0);
}
