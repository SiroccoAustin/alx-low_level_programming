#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - outputs a string
 * @str: string to copy
 * Return: copied string
 */

char *_strdup(char *str)
{
	char *copy;

	copy = (char *)malloc(sizeof(char));
	if (str == NULL)
	{
	return (NULL);
	}

	if (copy != NULL)
	{
	copy = strdup(str);
	}

	return (copy);
}
