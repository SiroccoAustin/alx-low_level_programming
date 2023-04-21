#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate the array
 * @array: array
 * @size: size of the array
 * @action: pointer function
 * Return: elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
