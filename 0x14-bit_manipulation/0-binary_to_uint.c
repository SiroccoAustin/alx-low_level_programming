#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: pointer to binary
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		result *= 2;

		if (isalpha(b[i]) != 0)
			return (0);
		else
			result += b[i] == '1' ? 1 : 0;
		i++;
	}
	return (result);
}
