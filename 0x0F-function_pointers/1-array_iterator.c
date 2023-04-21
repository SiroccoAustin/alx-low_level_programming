#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate the array
 * @size: size of the array
 * @action: pointer function
 * Return: elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
