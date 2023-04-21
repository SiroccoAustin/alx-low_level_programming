#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: first arg
 * @argv: second arg
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int total;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	total = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", total);
	return (0);
}
