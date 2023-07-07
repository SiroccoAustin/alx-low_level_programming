#include "main.h"

/**
 * clear_bit - set bit to 0
 * @n: number
 * @index: index
 * Return: 1 if its successful and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;

	*n = (*n & ~mask) | (0 << index);
	return (1);
}
