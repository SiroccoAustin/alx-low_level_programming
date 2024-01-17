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
	size_t left = 0, right = size - 1, i = 0;

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;

	}
	return (-1);
}
