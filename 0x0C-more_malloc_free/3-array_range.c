#include "main.h"

/**
 * array_range - create an array
 * @min: first arg
 * @max: second arg
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
