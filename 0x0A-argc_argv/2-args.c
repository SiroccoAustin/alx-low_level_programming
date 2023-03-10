#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: frist argument
 * @argv: second argument
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
}
