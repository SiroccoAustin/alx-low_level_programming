#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

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
