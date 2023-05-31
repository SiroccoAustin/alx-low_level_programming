#include <stdio.h>

/**
 * main - count number of args
 * @ac: first arg
 * @av: second arg
 * Return: always return 0
 */

int main(int ac, char **av)
{
	int count = 0, i = 1;

	if (ac == 1)
	{
		printf("%d\n", count);
		return (0);
	}
	else
	{
		while (av[i])
		{
			count++;
			i++;
		}

	}
	printf("%d\n", count);
	return (1);
}
