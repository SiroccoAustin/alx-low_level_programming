#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - prints number of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
	{
	printf("%d\n", 0);
	}
	if (argc > 1)
	{
	int i = 1;

	while (i < argc)
	{
	if (isalpha(*(argv[i])))
	{
	count++;
	}
	else
	{
	count++;
	}
	i++;
	}
	printf("%d\n", count);
	}
	return (0);
}
