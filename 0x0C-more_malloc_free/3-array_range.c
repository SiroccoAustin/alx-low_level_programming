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

	ptr = malloc((sizeof(int) * (max-min)) + sizeof(int));

	if(min > max)
	{
	return (NULL);
	}
	
	if (ptr != NULL)
	{
	return (ptr);
	}
	else
	{
	return (NULL);
	}
}
