#include "main.h"

/**
 * binary_to_uint - convert binary to decimal num
 * @b: argument
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	for (num = 0; *b; b++)
	{
		if (*b == '1')
		{
			num = num << 1;
			num++;
		}
		else if (*b == '0')
		{
			num = num << 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
