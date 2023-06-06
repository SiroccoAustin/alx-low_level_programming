#include "main.h"

/**
 * array_range - create an array
 * @min: first arg
 * @max: second arg
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, i, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}

	ptr = arr;
	return (ptr);
}
