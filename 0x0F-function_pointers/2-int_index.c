#include "function_pointers.h"

/**
 * int_index - print index
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size != 0)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	}
	}
	return (-1);
}
