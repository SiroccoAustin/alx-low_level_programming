#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: always return 0
 */

int main(int argc, char* argv[])
{
	int count;

	if (argc == 1)
	{
	printf("%d\n", 0);
	}
	if (argc > 1)
	{
	for (int i = 1; i < argc; i++)
	count++;
	}
	printf("%d\n", count);
	return (0);
}
