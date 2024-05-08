#include "search_algos.h"

/**
 * jump_search - jump search the array
 * @array: array to iterate
 * @size: size of the array
 * @value: value to look for
 * Return: returns the value in the array if successful and return -1 if not successful
 */

int jump_search(int *array, size_t size, int value)
{
	int i, start = 0, end = sqrt(size);
	while(arr[end] < value && start < size)
	{
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
		{
			end = size;
		}
		for (i = start; i < end; i++)
		{
			if (arr[i] == value)
			{
				return i;
			}
		}
	}
	return (-1)
}
