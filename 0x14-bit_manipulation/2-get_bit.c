#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 * Return: a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
		return (-1);

	k = (n >> index) & 1;
	return (k);
}
