#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to function
 * Return: arrays
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
