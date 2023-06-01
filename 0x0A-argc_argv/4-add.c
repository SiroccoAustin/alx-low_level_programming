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
	int result = 0, i = 1, j, length = 0, l = 1;

	if (ac == 1)
	{
		printf("%d\n", result);
		return (1);
	}
	else
	{
		while (av[i])
		{
			for (j = 0; av[i][j]; j++)
			{
				if (av[i][j] >= '0' && av[i][j] <= '9')
				{
					length++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			i++;
		}
		while (av[l])
		{
			result += atoi(av[l]);
			l++;
		}
	}
	printf("%d\n", result);
	return (0);
}
