#include <stdio.h>

/**
 * main - print name
 * @ac: first argument
 * @av: second argument
 * Return: number of arguments
 */

int main(int ac, char **av)
{
	printf("%s\n", *av);
	return (ac);
}
