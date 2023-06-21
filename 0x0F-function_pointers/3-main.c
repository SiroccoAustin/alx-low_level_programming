#include "3-calc.h"

/**
 * main - calculates basic math
 * @ac: number of args
 * @av: array of args
 * Return: always return 0
 */

int main(int ac, char *av[])
{
	int num1, num2, result;

	int (*f)(int, int);

	if (ac < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if (av[2] == '/' || av[2] == '%' && av[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	f = get_op_func(av[2]);
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
