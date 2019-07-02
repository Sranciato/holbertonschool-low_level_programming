#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: variable name.
 */
void rev_string(char *s)
{
	int size;
	int start = 0;
	char temp, temp2;

	for (size = 0; s[size] != '\0'; size++)
	{
	}

	size--;

	while (start <= size / 2)
	{
		temp = s[size - start];
		temp2 = s[start];
		s[start] = temp;
		s[size - start] = temp2;
		start++;
	}
}
