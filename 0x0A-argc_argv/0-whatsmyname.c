#include <stdio.h>

/**
 * main - main function
 * @ac: first arg
 * @av: second arg
 * Return: number of arguments in a command line
 */

int main(int ac, char *av[])
{
	if (ac == 1)
		printf("%s\n", av[0]);
	return (0);
}
