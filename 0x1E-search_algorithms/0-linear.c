#include "search_algos.h"

/**
 * linear_search - searches for a value
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index if sucessful or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i, index = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (index);
		index++;
	}
	return (-1);
}
