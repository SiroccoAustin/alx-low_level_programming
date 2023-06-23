#include "function_pointers.h"

/**
 * array_iterator - print element of array
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to function
 * Return: elements of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
