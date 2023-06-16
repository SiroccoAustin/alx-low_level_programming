#include "main.h"

/**
 * array_range - create an array
 * @min: first element
 * @max: last element
 * Return: an array
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int *) * max);

	if (ptr == NULL)
		return (NULL);

	while (i <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);

}
