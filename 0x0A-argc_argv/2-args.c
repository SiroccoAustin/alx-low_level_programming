#include <stdio.h>

/**
 * main - main function
 * @ac: first arg
 * @av: second arg
 * Return: number of args
 */

int main(int ac, char *av[])
{
	int i = 0;

	(void) ac;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
