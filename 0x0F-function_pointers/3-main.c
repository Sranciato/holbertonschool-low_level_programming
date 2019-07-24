#include "3-calc.h"
#include <string.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print.
 * @argv: name of dog.
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator = argv[2];
	int calc = 0;
	char *slash = "/";
	char *mod = "%";


	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (strcmp(operator, slash) != 0 || strcmp(operator, mod) != 0))
	{
		printf("Error\n");
		exit(100);
	}
	if ((*get_op_func(operator)) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	calc = (*get_op_func(operator))(num1, num2);
	printf("%d\n", calc);
	return (0);
}
