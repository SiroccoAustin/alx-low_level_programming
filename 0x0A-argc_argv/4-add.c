#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - outputs the sum of intergers
 * @argc: first argument
 * @argv: second argument
 * Return: sum of integers
 */

int main(int argc, char *argv[])
{
	int i, sum;
	
	if (argc <= 2)
	{
	printf("%d\n", 0);
	return (1);
	}
	
	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
	{
	if (isalpha(*(argv[i])))
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	sum += atoi(argv[i]);
	}
	}
	}
	printf("%d\n", sum);
	return (0);
}
