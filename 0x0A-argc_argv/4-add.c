#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers together
 * @ac: first arg
 * @av: second arg
 * Return: always returns 0
 */

int main(int ac, char *av[])
{
	int result = 0, i = 1;

	if (ac == 1)
	{
		printf("%d\n", result);
		return (1);
	}
	else
	{
		while (av[i])
		{
			if (isalpha(*(av[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(av[i]);
			}
			i++;
		}
	}
	printf("%d\n", result);
	return (0);
}
