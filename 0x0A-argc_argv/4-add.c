#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @ac: first arg
 * @av: second arg
 * Return: always Return 0
 */

int main(int ac, char *av[])
{
	int i = 1, count = 0;

	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}

	while (av[i])
	{
		if (isalpha(*(av[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			count += atoi(av[i]);
		}
		i++;
	}
	printf("%d\n", count);
	return (0);
}
