#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - allocate memory
 * @min: first argument
 * @max: second argument
 * Return: allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr;

	int i = 0;

	ptr = malloc(sizeof(int) * (min + max));

	if (min > max)
	{
	return (NULL);
	}
	if (ptr != NULL)
	{
	while (i < max)
	{
	*(ptr + i) = i;
	i++;
	}
	}
	else
	{
	return (NULL);
	}
	return (ptr);
}
