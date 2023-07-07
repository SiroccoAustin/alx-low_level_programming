#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: pointer to binary
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	while (b[i])
	{
		result *= 2;

		if (b[i] == '1')
		{
			result += 1;
		}
		else
			result += 0;
		i++;
	}
	return (result);
}
