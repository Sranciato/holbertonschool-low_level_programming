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
	int j;
	int a[] = {44, 32};

	for (i = 48; i <= 57; i++)
	{
		for (j = (i + 1); j <= 57; j++)
		{
			putchar(i);
			putchar(j);
		while (n < 2 && i != 56)
		{
			putchar(a[n]);
			n++;
		}
		n = 0;
		}
	}
	putchar('\n');
	return (0);
}
