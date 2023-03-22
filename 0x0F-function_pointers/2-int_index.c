#include "function_pointers.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * int_index - prints out the index of the matched int
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer the array
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != false)
	{
	break;
	}
	}
	return (i);
}
