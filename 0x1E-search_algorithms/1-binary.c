#include "search_algos.h"

/**
 * binary_search - searches for a value
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search for
 * Return: index if sucessful or -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i, j;

	for (i = 0; left <= right; i++)
	{
		int mid = (right + left) / 2;

		printf("Searching in array: ");
		for (j = left; j <= right; j++)
		{
			printf("%d", array[j]);
			if (j != right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;

	}
	return (-1);
}
