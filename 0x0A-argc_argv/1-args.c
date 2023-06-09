#include <stdio.h>

/**
 * main - main function
 * @ac: first arg
 * @av: second arg
 * Return: always return 0
 */

int main(int ac, char *av[])
{
	int i = 1, count = 0;

	if (ac == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	while (av[i])
	{
		count++;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
