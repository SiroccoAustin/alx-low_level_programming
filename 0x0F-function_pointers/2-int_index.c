#include "function_pointers.h"

/**
 * int_index - find index of number
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 * Return: index of number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, check;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
		i++;
	}
	return (-1);
}
