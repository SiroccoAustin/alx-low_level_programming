#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers
 * @ac: first arg
 * @av: second arg
 * Return: always return 0
 */

int main(int ac, char *av[])
{
	int mul = 1, i = 1;

	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (av[i])
		{
			mul *= atoi(av[i]);
			i++;
		}
	}
	printf("%d\n", mul);
	return (0);
}
