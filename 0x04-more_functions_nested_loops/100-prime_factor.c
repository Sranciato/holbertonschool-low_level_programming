#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
	long i, flag, j, lp, n = 612852475143;

	for (i = 2; i <= n / 2; i++)
	{
		if ((n % i) == 0)
		{
			lp = n / i;
			flag = 1;
			for (j = 2; j <= lp / 2; j++)
			{
				if (lp % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				printf("%ld\n", lp);
				break;
			}
		}
	}
	return (0);
}
