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

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
