#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatinate strings
 * @ac: number of arguments
 * @av: arguments
 * Return: outputs a combination of strings
 */

char *argstostr(int ac, char **av)
{
	char *ptr;

	int i;

	ptr = (char *)malloc(sizeof(char) * 16);

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	if (ptr != NULL)
	{
	for (i = 0; i < ac; i++)
	{
	printf("%s\n", av[i]);
	}
	}
	return (ptr);
}
