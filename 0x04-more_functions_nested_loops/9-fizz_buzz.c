#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @: variable name.
 * Return: always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !((i % 3 == 0) && (i % 5 == 0)))
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && !((i % 3 == 0) && (i % 5 == 0)))
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i < 100 && (!(i % 3 == 0) || !(i % 5 == 0)))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
