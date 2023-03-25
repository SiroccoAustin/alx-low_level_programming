#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - result of multiplication of two intergers
 * @argc: first argument
 * @argv: second argument
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 1)
	{
	printf("Error\n");
	return (1);
	}
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	mul *= atoi(argv[i]);
	}
	}
	printf("%d\n", mul);
	return (0);
}
