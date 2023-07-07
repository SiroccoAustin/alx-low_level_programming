#include "main.h"

/**
 * set_bit - set bit at index
 * @n: number
 * @index: index
 * Return: 1 if successful and -1 if not successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;

	*n = (*n & ~mask) | (1 << index);
	return (1);
}
