#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i, index = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (index);
		index++;
	}
	return (-1);
}
